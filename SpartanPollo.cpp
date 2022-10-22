// Codigo2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <SFML\Graphics.hpp>
#include "pollito.h"
int main()
{
    pollito Pepe(15);
    pollito Chicken(100);
    pollito Pio(90);
    pollito Plumadizimo(2.5);

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    sf::CircleShape cabeza(30);
    cabeza.setPosition(sf::Vector2f{ 60,-5 });
    cabeza.setFillColor(sf::Color::Yellow);

    sf::RectangleShape casco({ 71.f,71.f });
    casco.setPosition(sf::Vector2f{ 58,-5 });
    casco.setFillColor(sf::Color::Green);

    sf::RectangleShape sombra({ 44.f,43.f });
    sombra.setPosition(sf::Vector2f{ 71.5,10 });
    sombra.setFillColor(sf::Color::Black);

    sf::RectangleShape visor({ 42.f,40.f });
    visor.setPosition(sf::Vector2f{ 72.5,11 });
    visor.setFillColor(sf::Color::Yellow);

    sf::RectangleShape lineavisor({ 59.f,3.f });
    lineavisor.setPosition(sf::Vector2f{ 64,10 });
    lineavisor.setFillColor(sf::Color::Black);

    sf::RectangleShape reflejo({ 17.f,17.f });
    reflejo.setPosition(sf::Vector2f{ 97,17 });
    reflejo.setFillColor(sf::Color::White);

    sf::RectangleShape luz1({ 10.f,10.f });
    luz1.setPosition(sf::Vector2f{ 60,54 });
    luz1.setFillColor(sf::Color::White);

    sf::RectangleShape luz2({ 10.f,10.f });
    luz2.setPosition(sf::Vector2f{ 118,54 });
    luz2.setFillColor(sf::Color::White);

    sf::RectangleShape cuadrado({ 12.f,12.f });
    cuadrado.setPosition(sf::Vector2f{ 89,54 });
    cuadrado.setFillColor(sf::Color::Black);

    sf::CircleShape cuerpo(60);
    cuerpo.setPosition(sf::Vector2f{ 37,49 });
    cuerpo.setFillColor(sf::Color::Yellow);

    sf::RectangleShape cinturon({ 117.f,3.f });
    cinturon.setPosition(sf::Vector2f{ 40,117 });
    cinturon.setFillColor(sf::Color::Black);

    sf::RectangleShape granada1({ 17.f,17.f });
    granada1.setPosition(sf::Vector2f{ 95,112 });
    granada1.setFillColor(sf::Color::Magenta);

    sf::RectangleShape granada2({ 17.f,17.f });
    granada2.setPosition(sf::Vector2f{ 116,112 });
    granada2.setFillColor(sf::Color::Magenta);

    sf::RectangleShape granada3({ 17.f,17.f });
    granada3.setPosition(sf::Vector2f{ 137,112 });
    granada3.setFillColor(sf::Color::Magenta);

    sf::RectangleShape pata1({ 3.f,50.f });
    pata1.setPosition(sf::Vector2f{ 60,150 });
    pata1.setFillColor(sf::Color::Red);

    sf::RectangleShape pata2({3.f,50.f});
    pata2.setPosition(sf::Vector2f{ 135,150 });
    pata2.setFillColor(sf::Color::Red);

    //sf::CircleShape iris1(20.f);
    //iris1.setFillColor(sf::Color::Black);
    //iris1.setPosition(sf::Vector2f{ 100,50 });

    //sf::CircleShape iris2(20.f);
    //iris2.setFillColor(sf::Color::Black);
    //iris2.setPosition(sf::Vector2f{ 100,50 });

    //sf::CircleShape ojo1(20.f);
    //ojo1.setFillColor(sf::Color::White);
    //ojo1.setPosition(sf::Vector2f{ 100,50 });

    //sf::CircleShape ojo2(20.f);
    //ojo2.setFillColor(sf::Color::White);
    //ojo2.setPosition(sf::Vector2f{ 100,50 });

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(cabeza);
        //window.draw(iris1);
        //window.draw(iris2);
        //window.draw(ojo1);
        //window.draw(ojo2);
        window.draw(cuerpo);
        window.draw(casco);
        window.draw(sombra);
        window.draw(visor);
        window.draw(lineavisor);
        window.draw(cuadrado);
        window.draw(reflejo);
        window.draw(luz1);
        window.draw(luz2);
        window.draw(pata1);
        window.draw(pata2);
        window.draw(cinturon);
        window.draw(granada1);
        window.draw(granada2);
        window.draw(granada3);
        window.display();
    }
    return 0;
}