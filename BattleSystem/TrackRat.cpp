#include "TrackRat.h"


TrackRat::TrackRat()
{
}


TrackRat::~TrackRat()
{
}

void TrackRat::Attack(ICharacter& other) const
{
	// Implement attack logic here.
}

void TrackRat::SetWeapon(IWeapon& weapon)
{
	this->currentWeapon = weapon;
}

const IArmor* TrackRat::GetCurrentArmor() const
{
	return this->armor;
}

void TrackRat::SetCurrentArmor(IArmor *armorObj)
{
	this->armor = armorObj;
}