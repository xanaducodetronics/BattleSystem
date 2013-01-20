#pragma once
#include "BattleSystemGlobals.h"

class IArmor
{
public:
	virtual void SetIntegrity(double integrity);
	virtual double GetIntegrity() const;
	virtual double GetHardness() const;
	virtual int GetDamageResistance() const;
	virtual void SetBreakFunction(const std::function<void (const std::string&)>& func);
	virtual const std::function<void (const std::string&)> GetBreakFunction() const;
	virtual ~IArmor(void);
protected:
	IArmor(int damageResistance, double hardness, std::function<void (const std::string&)> breakAction = [](const std::string&){}) 
		: integrity(1.0f), damageResistance(damageResistance), hardness(hardness), breakAction(breakAction) {};
private:
	IArmor(void) {};
	virtual IArmor& operator =(const IArmor& other);
	double integrity;
	int damageResistance;
	double hardness;
	std::function<void (const std::string&)> breakAction;
};

