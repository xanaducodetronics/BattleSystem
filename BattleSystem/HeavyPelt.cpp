#include "HeavyPelt.h"


HeavyPelt::HeavyPelt(int resistance)
{
	this->damageResistance = resistance;
	this->integrity = 1.0f;
	this->breakAction = [](const std::string& arg){ std::cout << "Heavy Pelt has nothing to say." << std::endl; return;};
	this->breakAction("Hello");
}

HeavyPelt::~HeavyPelt(void)
{
}

double HeavyPelt::GetIntegrity() const
{
	return this->integrity;
}

void HeavyPelt::SetIntegrity(double integrity)
{
	this->integrity = integrity;
}

int HeavyPelt::GetResistance() const
{
	return this->damageResistance;
}

void HeavyPelt::SetBreakFunction(std::function<void (const std::string&)>& func)
{
	this->breakAction = func;
}

