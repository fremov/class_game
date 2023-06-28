#include "TexturesController.h"
#include <iostream>
#include "logger.h"


std::map<std::string, sf::Texture> TextureController::textures;

void TextureController::LoadTexture(const std::string& name, const std::string& filename) {
	sf::Texture texture;
	if (texture.loadFromFile(filename))
	{
		std::cout << ConsoleColor::green << "[Texture] " << filename <<  ConsoleColor::reset << std::endl;
		textures[name] = texture;
	}
	else {
		std::cout << ConsoleColor::red << "[Texture] " << filename << ConsoleColor::reset << std::endl;
	}
}

sf::Texture& TextureController::GetTexture(const std::string& name) {
	return textures[name];
}

bool TextureController::HasTexture(const std::string& name) {
	return textures.find(name) != textures.end();
}

void TextureController::ClearTexture() {
	textures.clear();
}

