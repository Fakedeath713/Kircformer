#ifndef __Button_H__
#define __Button_H__
#include <iostream>
#include "Utils.hpp"
class Button
{
public:
    Button(sf::Font &font, std::string text, sf::Vector2f pos, sf::Vector2f size, sf::Color color);
    bool isMouseOver(sf::RenderWindow &renderWindow);
    std::string getText();
//private:
    sf::RectangleShape m_buttonshape;
    sf::Text m_text;
};

#endif // __Button_H__