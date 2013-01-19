#pragma once
#include "ICharacter.h"
class TrackRat :
	public ICharacter
{
public:
	TrackRat(void);
	~TrackRat(void);
	void Attack(ICharacter& other) const;
	void SetWeapon(IWeapon& other);
	const IArmor*  GetCurrentArmor() const;
	void SetCurrentArmor(IArmor *armorObj);
};

