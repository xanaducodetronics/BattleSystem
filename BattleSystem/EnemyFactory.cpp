#include "EnemyFactory.h"
#include "TrackRat.h"

EnemyFactory::EnemyFactory(void)
{
}


EnemyFactory::~EnemyFactory(void)
{
}

ICharacter *EnemyFactory::CreateRandom()
{
	return new TrackRat();
}
