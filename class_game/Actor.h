#pragma once
#include <vector>
#include <string>
#include <iostream>

namespace Frem {
	class Actor {
	private:
		std::string name;
		double health;
		double magicka;
		double stamina;
		bool is_player;
		double damage;
		std::vector<std::string> passives;
		std::vector<std::string> skills;
		std::vector<std::string> items;

	public:
		Actor(std::string name, bool is_player, double health, double damage)
		{
			this->name = name;
			this->is_player = is_player;
			this->health = health;
			this->damage = damage;
		};
		void move(double x, double y, double z)
		{
			std::cout << "Player move to" << x << " " << y << " " << z << std::endl;
		}
		std::string get_name()
		{
			return this->name;
		}
		void set_name(const std::string& name) {
			this->name = name;
		}
		double get_health() 
		{
			return this->health;
		}
		void set_health(double& health)
		{
			this->health = health;
		}
		double get_damage()
		{
			return this->damage;
		}
		void set_damage(double& damage) {
			this->damage = damage;
		}
		void get_info()
		{
			std::cout << "name: " << this->name << std::endl;
			std::cout << "damage: " << this->damage << std::endl;
			std::cout << "HP: " << this->health << std::endl;
		}
	};
	
}