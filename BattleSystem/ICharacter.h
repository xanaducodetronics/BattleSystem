#pragma once
#include "IWeapon.h"
#include "IArmor.h"

class ICharacter
{
public:
	virtual void SetWeapon(IWeapon* weapon);
	virtual void Attack(ICharacter &other) const;
	virtual IArmor* GetCurrentArmor() const;
	virtual void SetCurrentArmor(IArmor *armorObj);
	~ICharacter(void);
	
protected:
	ICharacter(void);
private:
	ICharacter(const ICharacter& other);
	ICharacter& operator =(const ICharacter& other);
	int hitPoints;
	IWeapon* currentWeapon;	
	IArmor* armor;
};

