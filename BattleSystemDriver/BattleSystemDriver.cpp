// BattleSystemDriver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <HeavyPelt.h>
#include <TrackRat.h>

void DoStuff(TrackRat&);
void SaySomething(const std::string& name);

int main(int argc, char* argv[])
{	
	ICharacter* rat = new TrackRat();
	rat->SetCurrentArmor(new HeavyPelt(19,22.3f));
	
	IArmor* armor = rat->GetCurrentArmor();

	
	delete rat;
	char something;
	std::cin >> something;
	return 0;
}

void DoStuff(TrackRat &rat)
{
	IArmor* pelt = new HeavyPelt(15, 20.5f);
	rat.SetCurrentArmor(pelt);
}

void SaySomething(const std::string& name)
{
	std::cout << "Message from inside " << name << std::endl;
}