#include "ICharacter.h"


ICharacter::ICharacter(void)
{
}


ICharacter::~ICharacter(void)
{
	delete this->currentWeapon;
	delete this->armor;
}

void ICharacter::Attack(ICharacter& other) const
{
	// Implement attack logic here.
}

void ICharacter::SetWeapon(IWeapon* weapon)
{
	this->currentWeapon = weapon;
}

IArmor* ICharacter::GetCurrentArmor() const
{
	return this->armor;
}

void ICharacter::SetCurrentArmor(IArmor *armorObj)
{
	this->armor = armorObj;
}
