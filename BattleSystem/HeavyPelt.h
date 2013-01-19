#pragma once
#include "BattleSystemGlobals.h"
#include "IArmor.h"
#include "IWeapon.h"


class HeavyPelt :
	public IArmor
{
public:
	HeavyPelt(int resistance);
	~HeavyPelt();
	void SetIntegrity(double integrity);
	double GetIntegrity() const;
	int GetResistance() const;
	void SetBreakFunction(std::function<void (const std::string&)>& func);
};

