#include "Timestamp.h"


Timestamp::Timestamp()
{
	time = 0;
}
Timestamp::Timestamp(const unsigned long other)
{
	time = other;
}
const unsigned long Timestamp::GetValue()
{
	return time;
}
void Timestamp::SetValue(const unsigned long other)
{
	time = other;
}
std::ostream&  operator << (std::ostream& out, const Timestamp& object)
{
	out <<"Time: "<< object.time << std::endl;
	return out;
}
 std::istream& operator>>(std::istream& in, Timestamp& object)
{
	long temp;
	in >> temp;
	object = Timestamp(temp);
	return in;
}

Timestamp& Timestamp::operator+= (const unsigned long toAdd)
{
	time += toAdd;
	return *this;
}
Timestamp Timestamp::operator+ (const unsigned long toAdd)
{
	
	return Timestamp(time + toAdd);
}
Timestamp::~Timestamp()
{
	time = 0;
}