#ifndef __Button_H__
#define __Button_H__
#include <SFML/Graphics.hpp>
#include <iostream>
class Button
{
public:
    Button(sf::Font font, std::string text, sf::Vector2f pos, sf::Vector2f size, sf::Color color);
    bool isMouseOver(sf::RenderWindow &renderWindow);
//private:
    sf::RectangleShape m_buttonshape;
    sf::Text m_text;
};

#endif // __Button_H__