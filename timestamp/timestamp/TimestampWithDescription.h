#pragma once
#include "Timestamp.h"
class TimestampWithDescription: public Timestamp
{
public:
	TimestampWithDescription();
	TimestampWithDescription(const unsigned long, const char*);
	TimestampWithDescription(const TimestampWithDescription&);
	TimestampWithDescription& operator=(const TimestampWithDescription&);
	void SetDescription(const char*);
	const char* GetDescription();
	friend std::ostream& operator << (std::ostream&, const TimestampWithDescription&);
	friend std::istream& operator>>(std::istream&, TimestampWithDescription&);
	~TimestampWithDescription();

private:
	char* description;
};
