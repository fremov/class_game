#include "Actor.h"
#include <iostream>
#include "logger.h"
#include "TexturesController.h"
namespace Frem {

    sf::Texture Actor::get_texture()
    {
        return this->m_texture;
    }
    void Actor::set_texture(const std::string& name, const std::string& sprite_path)
    {
        TextureController::LoadTexture(name, sprite_path);
    }
	std::string Actor::get_name()
	{
		return this->m_name;
	}
	void Actor::set_name(const std::string& name)
	{
		this->m_name = name;
	}
	double Actor::get_health()
	{
		return this->m_health;
	}
	void Actor::set_health(const double& health)
	{
		this->m_health = health;
	}
	double Actor::get_damage()
	{
		return this->m_damage;
	}
	void Actor::set_damage(const double& damage)
	{
		this->m_damage = damage;
	}
    // Метод для получения информации об актере
    void Actor::get_info() const {
        std::cout << "Name: " << m_name << std::endl;
        std::cout << "Health: " << m_health << std::endl;
        std::cout << "Magicka: " << m_magicka << std::endl;
        std::cout << "Stamina: " << m_stamina << std::endl;
        std::cout << "Is Player: " << m_is_player << std::endl;
        std::cout << "Damage: " << m_damage << std::endl;

        std::cout << "Passives: ";
        for (const auto& passive : m_passives) {
            std::cout << passive << ", ";
        }
        std::cout << std::endl;

        std::cout << "Skills: ";
        for (const auto& skill : m_skills) {
            std::cout << skill << ", ";
        }
        std::cout << std::endl;

        std::cout << "Items: ";
        for (const auto& item : m_items) {
            std::cout << item << ", ";
        }
        std::cout << std::endl;

        std::cout << "Position: (" << m_position.x << ", " << m_position.y << ")" << std::endl;
        std::cout << "Size: (" << m_size.x << ", " << m_size.y << ")" << std::endl;
        std::cout << "Speed: " << m_speed << std::endl;

    }
}