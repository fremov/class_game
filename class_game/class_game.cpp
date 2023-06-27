#include <iostream>
#include "Actor.h"
#include "PLayer.h"
#include "GameEvents.h"

int main()
{
	Frem::Actor Player_1("Player 1", true, 100.1, 5.1);
	Frem::Actor Player_2("Player 2", false, 15.1, 12.1);

	std::vector<GameEvents::AttackData> attack_data = GameEvents::attack(&Player_1, &Player_2); // вызываем функцию attack и сохраняем результат
	
	Player_1.get_info();
	Player_2.get_info();

	return 0;
}
