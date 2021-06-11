#include "TimestampWithDescription.h"

TimestampWithDescription::TimestampWithDescription()
{
	description = nullptr;
	SetValue(0);
}
TimestampWithDescription::TimestampWithDescription(const unsigned long Time , const char* Description)
{
	SetValue(Time);
	SetDescription(Description);
}
TimestampWithDescription:: TimestampWithDescription(const TimestampWithDescription& other)
{
	SetDescription(other.description);
	SetValue(other.time);
}
TimestampWithDescription& TimestampWithDescription:: operator=(const TimestampWithDescription& other)
{
	if (this!= &other)
	{
		delete[] description;
		SetDescription(other.description);
		SetValue(other.time);
	}
	return *this;
}
void TimestampWithDescription::SetDescription(const char* other)
{
	description = new char[strlen(other) + 1];
	strcpy_s(description, strlen(other) + 1, other);
}
const char* TimestampWithDescription::GetDescription()
{
	return description;
}
std::ostream& operator << (std::ostream& out, const TimestampWithDescription& object)
{
	out << "Time: " << object.time << "   Description: " << object.description << std::endl;
	return out;
}
std::istream& operator>>(std::istream& in, TimestampWithDescription& object)
{
	char* temp = new char[100];
	
	unsigned long tempTime;
	in >> temp;
	in >> tempTime;
	object = TimestampWithDescription(tempTime,temp);
	delete[] temp;
	return in;
}
TimestampWithDescription::~TimestampWithDescription()
{
	delete[] description;
	description = nullptr;
}