#pragma once
#include "BattleSystemGlobals.h"
#include "IArmor.h"
#include "IWeapon.h"


class HeavyPelt :
	public IArmor
{
public:
	HeavyPelt(int damageResistance, double hardness) : IArmor(damageResistance, hardness) {};
	~HeavyPelt();
};

