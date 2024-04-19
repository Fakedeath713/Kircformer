#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "Button.hpp"
enum state{
    menu = 0,
    game = 1,
    pause = 2
};
int main(int argc, char const *argv[])
{
    // Game game;
    // game.start();

    sf::Font font;
    if (!font.loadFromFile("../arial.ttf"))
        std::perror("font couldn't load properly");
    
    state gameState = menu;

    sf::Text testText;
    testText.setFont(font);
    testText.setString("Game state");
    testText.setCharacterSize(30);
    testText.setPosition(300, 300);

    std::vector<Button> startMenuButtonVector;
    Button startButton(font, "Start", {500, 300}, {150, 75}, sf::Color::Red);
    Button exitButton(font, "Exit", {500, 700}, {150, 75}, sf::Color::Red);
    startMenuButtonVector.push_back(startButton);
    startMenuButtonVector.push_back(exitButton);
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Kiracformer" };
    window.setFramerateLimit(144);
    
    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            window.clear();
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            switch (gameState)
            {
            case menu:
                for(auto button : startMenuButtonVector)
                {
                    switch(event.type)
                    {
                        case sf::Event::Closed:
                            window.close();
                        break;

                        case sf::Event::MouseButtonPressed:
                            if(button.isMouseOver(window))
                                button.m_buttonshape.setFillColor(sf::Color::White);
                            break;

                        case sf::Event::MouseButtonReleased:
                            button.m_buttonshape.setFillColor(sf::Color::Red);                            
                            if(button.isMouseOver(window))
                            {
                                if(button.getText() == "Start")
                                {
                                    gameState = game;
                                }
                                else if(button.getText() == "Exit")
                                    window.close();
                            }
                            break;

                        default:
                            break;
                    }
                window.draw(button.m_buttonshape);
                window.draw(button.m_text);
                }
                break;
                
            case game:
                window.draw(testText);
                break;

            case pause:

                break;
            default:
                break;
            }
        }
 
        window.display();
    }

    return 0;
}

