#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "Button.hpp"


int main(int argc, char const *argv[])
{
    // Game game;
    // game.start();

    sf::Font font;
    if (!font.loadFromFile("../arial.ttf"))
        std::perror("font couldn't load properly");
    //sf::Text text;
    //text.setFont(font);
    //text.setCharacterSize(24);
    //text.setString("Hello World!");
    //text.setFillColor(sf::Color::Red);

    Button button(font, "buttonA", {500, 500}, {150, 75}, sf::Color::Red);

    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Kiracformer" };
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        window.draw(button.m_text);
        window.draw(button.m_buttonshape);
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left) && button.isMouseOver(window))
        {            
            button.m_buttonshape.setFillColor(sf::Color::White);
        }
        else
        {
            button.m_buttonshape.setFillColor(sf::Color::Red);
        }
        window.display();
    }

    return 0;
}

