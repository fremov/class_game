#pragma once
#include <SFML/Graphics.hpp>
#include <unordered_map>

class FontController {
public:

	static void LoadFont(const std::string& name, const std::string& filename);
	static sf::Font& GetFont(const std::string& fontName);

private:
	
	static std::unordered_map<std::string, sf::Font> fonts;
};
