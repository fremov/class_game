#pragma once
#include "Actor.h"
namespace GameEvents {
	void attack(Frem::Actor attacker, Frem::Actor attaked)
	{
		double damage = attacker.get_damage();
		double health = attaked.get_health();
		double res = health - damage;
		attaked.set_health(res);
	}
}