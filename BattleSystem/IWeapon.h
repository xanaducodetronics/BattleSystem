#pragma once
#include "BattleSystemGlobals.h"
class IWeapon
{
public:
	virtual void SetIntegrity(double integrity);
	virtual double GetIntegrity() const;
	virtual double GetHardness() const;
	virtual int GetBaseDamage() const;
	virtual void SetBreakFunction(const std::function<void (const std::string&)>& func);
	virtual const std::function<void (const std::string&)> GetBreakFunction() const;
	virtual ~IWeapon(void);

protected:
	IWeapon(int baseDamage, double hardness, std::function<void (const std::string&)> breakAction = [](const std::string&){}) 
		: integrity(1.0f), baseDamage(baseDamage), hardness(hardness), breakAction(breakAction) {};
private:
	IWeapon();
	virtual IWeapon& operator =(const IWeapon& other);
	
	double integrity;
	int baseDamage;
	double hardness;
	std::function<void (const std::string&)> breakAction;
};

