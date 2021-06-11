#pragma once

class CD
{
public:
	enum logicalCDType
	{
		AudioCD, SuperAudioCD, CD_MIDI,
		CD_ROM, VCD, SuperVideoCD,
		CD_i, CD_iReady
	};
	CD();
	CD(const char*, const double, const bool, const double, const logicalCDType);
	double priceFor1GB();
	double percentOfFreeMemory();
	void printDisk();
	CD* operator+=(const int k);
	CD* operator-=(const int k);
	~CD();

private:
	char* manufacturer;
	double availableMemory;
	double allMemory;
	bool isRewritable;
	double price;
	logicalCDType type;
};

