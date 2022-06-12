#include <iostream>
#include <ctime>
#include <cstdlib>

#include <SFML/Graphics.hpp>

#include "Global/defines.h"

int main()
{
    sf::RenderWindow Window(sf::VideoMode(800, 600), "Plasma Storm RPG");
    sf::CircleShape Shape(100.f);
    Shape.setFillColor(sfGreen);

    while (Window.isOpen())
    {
        sf::Event Event;
        while (Window.pollEvent(Event))
        {
            if(Event.type == sf::Event::Closed)
                Window.close();
        }

        Window.clear();

        Window.draw(Shape);

        Window.display();
    }
}