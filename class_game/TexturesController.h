#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <map>

class TextureController {
public:

	static void LoadTexture(const std::string& name, const std::string& filename);
	static sf::Texture& GetTexture(const std::string& name);
	static bool HasTexture(const std::string& name);
	static void ClearTexture();

private:
	static std::map<std::string, sf::Texture> textures;
};