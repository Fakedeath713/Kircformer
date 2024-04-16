#include "Button.hpp"
Button::Button(sf::Font font, std::string text, sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
    this->m_buttonshape.setSize(size);
    this->m_buttonshape.setPosition(pos);
    this->m_buttonshape.setFillColor(color);
}

bool Button::isMouseOver(sf::RenderWindow &renderWindow)
{
    sf::Vector2i localPosition = sf::Mouse::getPosition(renderWindow);
    std::cout << localPosition.x << "   " << localPosition.y << "\n";

    int buttonPosx = m_buttonshape.getPosition().x;
    int buttonPosy = m_buttonshape.getPosition().y;
    int controlPosx = localPosition.x - buttonPosx;
    int controlPosy = localPosition.y - buttonPosy;
    
    if((controlPosx >= 0 && controlPosx <= m_buttonshape.getSize().x) && (controlPosy >= 0 && controlPosy <= m_buttonshape.getSize().y))
        return true;
    else
        return false;
}