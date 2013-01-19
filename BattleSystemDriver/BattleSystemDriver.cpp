// BattleSystemDriver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <HeavyPelt.h>

int main(int argc, char* argv[])
{
	IArmor* pelt = new HeavyPelt(15);
	delete pelt;

	char something;
	std::cin >> something;
	return 0;
}

