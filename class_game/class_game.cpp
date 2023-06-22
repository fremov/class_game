#include <iostream>
#include "Actor.h"
#include "PLayer.h"
int main()
{
	Frem::Actor a("Player 1", true, 100.1, 5.1);
	Frem::Actor b("Player 2", false, 15.1, 12.1);

	
	a.attack(a, b);
	a.get_info();
	b.get_info();
}
