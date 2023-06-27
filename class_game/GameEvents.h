#pragma once
#include "Actor.h"
#include <vector>
#include <iostream>
namespace GameEvents {

    struct AttackData {
        Frem::Actor* attacker;
        Frem::Actor* attacked;
        double damage;
    };

    std::vector<AttackData> attack(Frem::Actor* attacker, Frem::Actor* attacked)
    {
        double damage = attacker->get_damage();
        double health = attacked->get_health();
        double res = health - damage;
        AttackData data = { attacker, attacked, res };
        attacked->set_health(res);
        std::cout << attacker->get_name() << " hit " << attacked->get_name() << " by " << damage << std::endl;
        return { data };
    }

}