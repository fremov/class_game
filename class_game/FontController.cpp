#include "FontController.h"
#include <iostream>
#include "logger.h"

std::unordered_map<std::string, sf::Font> FontController::fonts;

void FontController::LoadFont(const std::string& fontname, const std::string& filename) {
	sf::Font font;
	if (font.loadFromFile(filename))
	{
		std::cout << ConsoleColor::green << "[Font] " << filename << ConsoleColor::reset << std::endl;
		fonts[fontname] = font;
	}
	else {
		std::cout << ConsoleColor::red << "[Font] " << filename << ConsoleColor::reset << std::endl;
	}
}

sf::Font& FontController::GetFont(const std::string& fontname) {
	return fonts[fontname];
}