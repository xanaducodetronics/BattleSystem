#include "IWeapon.h"


IWeapon::IWeapon()
{
}

IWeapon::~IWeapon()
{
}

void IWeapon::SetIntegrity(double integrity)
{
	this->integrity = integrity;
}

double IWeapon::GetIntegrity() const
{
	return this->integrity;
}

int IWeapon::GetBaseDamage() const
{
	return this->baseDamage;
}

void IWeapon::SetBreakFunction(const std::function<void (const std::string&)>& func)
{
	this->breakAction = func;
}

const std::function<void (const std::string&)> IWeapon::GetBreakFunction() const
{
	return this->breakAction;
}

double IWeapon::GetHardness() const
{
	return this->hardness;
}