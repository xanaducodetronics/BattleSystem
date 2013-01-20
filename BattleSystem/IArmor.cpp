#include "IArmor.h"

IArmor::~IArmor(void)
{
}

IArmor& IArmor::operator=(const IArmor& other)
{
	/*this->breakAction = other.GetBreakFunction();
	this->damageResistance = other.GetDamageResistance();
	this->integrity = other.GetIntegrity();
	this->hardness = other.GetHardness();*/
	return *this;
}

void IArmor::SetIntegrity(double integrity)
{
	this->integrity = integrity;
}

double IArmor::GetIntegrity() const
{
	return this->integrity;
}

int IArmor::GetDamageResistance() const
{
	return this->damageResistance;
}

void IArmor::SetBreakFunction(const std::function<void (const std::string&)>& func)
{
	this->breakAction = func;
}

const std::function<void (const std::string&)> IArmor::GetBreakFunction() const
{
	return this->breakAction;
}

double IArmor::GetHardness() const
{
	return this->hardness;
}