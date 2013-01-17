#pragma once
#include "ICharacter.h"
class EnemyFactory
{
public:
	static ICharacter *CreateRandom();
private:
	EnemyFactory(void);
	~EnemyFactory(void);
};

