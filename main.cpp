#include <iostream>
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
int main(int argc, char const *argv[])
{
    sf::VideoMode vm;
    sf::RenderWindow* renderWindow;
    vm.width  = 800;
    vm.height = 600;
    renderWindow = new sf::RenderWindow(vm, "kircformer", sf::Style::Titlebar | sf::Style::Close);

    renderWindow->setFramerateLimit(60);
    renderWindow->display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
