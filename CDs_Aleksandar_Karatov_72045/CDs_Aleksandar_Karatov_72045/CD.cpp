#include "CD.h"
#include <iostream>

CD::CD()
{
	manufacturer = nullptr;
	availableMemory = 0;
	allMemory = 0;
	isRewritable = false;
	price = 0;
	type = CD_ROM;
}
CD::CD(const char* Manufacturer, const double AllMemory, const bool IsRewritable,
	const double Price, const logicalCDType Type = CD_ROM)
{
	if (strlen(Manufacturer)>20 || strlen(Manufacturer) == 0)
	{
		std::cout << "Error! Manufacturer name is longer than 20 symbols or empty!";
		exit(1);
	}
	manufacturer = new char[strlen(Manufacturer)+1];
	strcpy_s(manufacturer, strlen(Manufacturer) + 1, Manufacturer);
	allMemory = AllMemory;
	availableMemory = AllMemory;
	isRewritable = IsRewritable;
	price = Price;
	type = Type;
}

double CD:: priceFor1GB()
{
	return price / allMemory;
}
double CD::percentOfFreeMemory()
{
	return (availableMemory / allMemory) * 100;
}
void CD::printDisk()
{
	std::cout << "Manufacturer: " << manufacturer << std::endl <<
		"Available memory: " << availableMemory << "GB" << std::endl <<
		"All memory: " << allMemory << "GB" << std::endl;
	if (isRewritable)
	{
		std::cout << "Disk is rewritable" << std::endl;
	}
	else
	{
		std::cout << "Disk is not rewritable" << std::endl;
	}
	std::cout << "Price: "<< price << std::endl;
	switch (type)
	{
	case CD::AudioCD:
		std::cout << "Disk type: Audio CD" << std::endl;
		break;
	case CD::SuperAudioCD:
		std::cout << "Disk type: Super audio CD" << std::endl;
		break;
	case CD::CD_MIDI:
		std::cout << "Disk type: CD-MIDI" << std::endl;
		break;
	case CD::CD_ROM:
		std::cout << "Disk type: CD-ROM" << std::endl;
		break;
	case CD::VCD:
		std::cout << "Disk type: VCD" << std::endl;
		break;
	case CD::SuperVideoCD:
		std::cout << "Disk type: Super video CD" << std::endl;
		break;
	case CD::CD_i:
		std::cout << "Disk type: CD-i" << std::endl;
		break;
	case CD::CD_iReady:
		std::cout << "Disk type: CD-i ready" << std::endl;
		break;
	default:
		break;
	}
	std::cout << "Price for 1 GB:" << priceFor1GB() << "lv." << std::endl;
	std::cout << "Percent available memory: " << percentOfFreeMemory() << "%" << std::endl;
}

CD* CD::operator+=(const int k)
{
	if (isRewritable && availableMemory - ((double) k/1000) > 0  )
	{
		availableMemory -= (double)k / 1000;
	}
	else if (!isRewritable)
	{
		std::cout << "ERROR: DISK IS NOT REWRITABLE" << std::endl;
	}
	else if (availableMemory - ((double)k / 1000) <= 0)
	{
		std::cout << "ERROR: INSUFFICIENT MEMORY!" << std::endl;
	}
	return this;
}
CD* CD::operator-=(const int k)
{
	if (isRewritable && availableMemory + ((double)k / 1000) <= allMemory)
	{
		availableMemory += (double)k / 1000;
	}
	else if (!isRewritable)
	{
		std::cout << "ERROR: DISK IS NOT REWRITABLE" << std::endl;
	}
	else if(availableMemory + ((double)k / 1000) > allMemory)
	{
		std::cout << "ERROR: TRYING TO DELETE MORE THAN ALL MEMORY" <<std::endl;
	}
	return this;
}
CD::~CD()
{
	delete[] manufacturer;
	manufacturer = nullptr;
}