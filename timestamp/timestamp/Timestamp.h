#pragma once
#include <iostream>
class Timestamp
{
public:
	Timestamp();
	Timestamp(const unsigned long);
	const unsigned long GetValue();
	void SetValue(const unsigned long);
	friend std::ostream& operator << (std::ostream&, const Timestamp&);
	friend std::istream& operator>>(std::istream&, Timestamp&);
	Timestamp& operator+= (const unsigned long);
	Timestamp operator+ (const unsigned long);
	~Timestamp();

protected:
	unsigned long time;
};
