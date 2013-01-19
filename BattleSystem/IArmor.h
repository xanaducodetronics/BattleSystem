#pragma once
#include "BattleSystemGlobals.h"
class IArmor
{
public:
	virtual void SetIntegrity(double integrity) = 0;
	virtual double GetIntegrity() const = 0;
	virtual int GetResistance() const = 0;
	virtual void SetBreakFunction(std::function<void (const std::string&)>& func) = 0;
	virtual ~IArmor(void);
protected:
	IArmor(void);
	int protectionValue;
	virtual IArmor& operator =(const IArmor& other);
	double integrity;
	int damageResistance;
	std::function<void (const std::string&)> breakAction;
};

