#pragma once
#include "BattleSystemGlobals.h"
#include "iarmor.h"
#include "IWeapon.h"
#include <functional>

class HeavyPelt :
	public IArmor
{
public:
	HeavyPelt(void);
	~HeavyPelt(void);

private:
	Action breakAction;
	std::function<void ()> breakAction2;
	double integrity;
	int damageResistance;

};

