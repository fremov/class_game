#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

namespace Frem {
	class Actor {
	private:
		std::string m_name = "player";
		double m_health = 0.f;
		double m_magicka = 0.f;
		double m_stamina = 0.f;
		bool m_is_player = false;
		double m_damage = 0.f;
		std::vector<std::string> m_passives {};
		std::vector<std::string> m_skills {};
		std::vector<std::string> m_items {};
		sf::Vector2f m_position;
		sf::Vector2f m_size;
		float m_spead;
		sf::Texture m_texture;
		sf::Sprite m_sprite;
	public:
		//Actor(float x, float y, float withd, float height);

		void update(float deltaTime);
		void draw(sf::RenderWindow& window);
		void handleInput();
		void handleCollision();
		std::string get_name();
		void set_name(const std::string& name);
		double get_health();
		void set_health(double& health);
		double get_damage();
		void set_damage(double& damage);
		void get_info();
	};
	
}