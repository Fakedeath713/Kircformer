#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>
#include "Game.hpp"


int main(int argc, char const *argv[])
{
    // Game game;
    // game.start();

    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Kiracformer" };
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}

