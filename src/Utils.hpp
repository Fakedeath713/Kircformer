#ifndef __Utils_H__
#define __Utils_H__
#include <SFML/Graphics.hpp>
class Utils
{
public:
    static bool isColliding(sf::Vector2i point, sf::RectangleShape rectangle)
    {
        int localPointx = point.x - rectangle.getPosition().x;
        int localPointy = point.y - rectangle.getPosition().y;
        if((localPointx >= 0 && localPointx <= rectangle.getSize().x) && (localPointy >= 0 && localPointy <= rectangle.getSize().y))
            return true;
        else
            return false;
    };
};

#endif