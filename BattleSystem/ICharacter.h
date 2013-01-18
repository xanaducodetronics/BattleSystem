#pragma once
#include "IWeapon.h"
#include "IArmor.h"

class ICharacter
{
public:
	virtual bool SetWeapon(IWeapon weapon) = 0;
	virtual void Attack(ICharacter &other) const = 0;
	virtual const IArmor& GetCurrentArmor() const = 0;

private:
	ICharacter(void);
	ICharacter(const ICharacter& other);
	~ICharacter(void);
	ICharacter& operator =(const ICharacter& other);

protected:
	int hitPoints;
	IWeapon currentWeapon;	
};

