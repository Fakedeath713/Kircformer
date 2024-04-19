#include "Button.hpp"
Button::Button(sf::Font& font, std::string text, sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
    this->m_buttonshape.setSize(size);
    this->m_buttonshape.setPosition(pos);
    this->m_buttonshape.setFillColor(color);
    this->m_text.setFont(font);
    this->m_text.setString(text);
    this->m_text.setCharacterSize(24);
    this->m_text.setFillColor(sf::Color::Blue);
    this->m_text.setPosition({(pos.x + m_buttonshape.getGlobalBounds().width / 2) - m_text.getGlobalBounds().width / 2, (pos.y + m_buttonshape.getGlobalBounds().height / 2) - m_text.getGlobalBounds().height / 2});
}

bool Button::isMouseOver(sf::RenderWindow &renderWindow)
{
    sf::Vector2i localPosition = sf::Mouse::getPosition(renderWindow);

    return Utils::isColliding(localPosition, this->m_buttonshape);
}

std::string Button::getText()
{
    return this->m_text.getString();
}