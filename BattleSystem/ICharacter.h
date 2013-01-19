#pragma once
#include "IWeapon.h"
#include "IArmor.h"

class ICharacter
{
public:
	virtual void SetWeapon(IWeapon &weapon) = 0;
	virtual void Attack(ICharacter &other) const = 0;
	virtual const IArmor*  GetCurrentArmor() const = 0;
	virtual void SetCurrentArmor(IArmor *armorObj) = 0;
	
protected:
	ICharacter(void);
	ICharacter(const ICharacter& other);
	~ICharacter(void);
	ICharacter& operator =(const ICharacter& other);
	int hitPoints;
	IWeapon currentWeapon;	
	IArmor* armor;
};

