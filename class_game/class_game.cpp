#include "Actor.h"
#include "GameEvents.h"
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "TexturesController.h"
#include "FontController.h"
int main()
{
    using namespace sf;
	using std::cout;
	using std::endl;

	Frem::Actor Player_1("Player 1", true, 100.1, 5.2);
	//Frem::Actor Player_2("Player 2", false, 15.1, 12.1);

	//GameEvents::attack(&Player_1, &Player_2); // вызываем функцию attack и сохраняем результат
	
	//Player_1.get_info();
	//Player_2.get_info();


	//Player_1.set_name("Player 1 edited");
	//std::cout << Player_1.get_name() << std::endl;

	RenderWindow win(VideoMode(900, 900), "Frem", Style::Default);
	
	TextureController::LoadTexture("carmen", "images/carmen.png");
	Sprite carmen(TextureController::GetTexture("carmen"));
	

	FontController::LoadFont("mainfont", "fonts/TT Travels Trial Black.otf");
	sf::Text player_name;
	player_name.setFont(FontController::GetFont("mainfont"));
	player_name.setString(Player_1.get_name());
	player_name.setCharacterSize(25);
	player_name.setFillColor(Color::Green);

	while (win.isOpen())
	{
		Event event;
		while (win.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				win.close();
				return 0;
			}
		}

		
		win.draw(carmen);
		win.draw(player_name);
		win.display();
	}
	return 0;
}
