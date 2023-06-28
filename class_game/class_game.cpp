#include "Actor.h"
#include "PLayer.h"
#include "GameEvents.h"
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

int main()
{
    using namespace sf;
	using std::cout;
	using std::endl;

	//Frem::Actor Player_1("Player 1", true, 100.1, 5.2);
	//Frem::Actor Player_2("Player 2", false, 15.1, 12.1);

	//GameEvents::attack(&Player_1, &Player_2); // вызываем функцию attack и сохраняем результат
	
	//Player_1.get_info();
	//Player_2.get_info();


	//Player_1.set_name("Player 1 edited");
	//std::cout << Player_1.get_name() << std::endl;

	RenderWindow win(VideoMode(900, 900), "Figures", Style::Default);

	Texture carmen_texture;

	if (!carmen_texture.loadFromFile("images/carmen.png"))
	{
		std::cout << "Error load image";
		return -1;
	}
	Sprite sprite(carmen_texture);

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

		win.clear();
		win.draw(sprite);
		win.display();
	}
	return 0;
}
