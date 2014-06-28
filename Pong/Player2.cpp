#include "Player2.h"
Player2::Player2(sf::Vector2f position)
{
    pPlayer = new sf::RectangleShape;
    pSize = new sf::Vector2f(15,200);
    pPlayer->setSize(*pSize);
    pPlayer->setPosition(position);
}




Player2::~Player2()
{
}




void Player2::Render(sf::RenderWindow *rw)
{
    rw->draw(*pPlayer);
};




void Player2::HandleEvents()
{
};




void Player2::Update(double frametime)
{
    if (pPlayer->getPosition().y < 700)
    {
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        {
            pPlayer->move(0, 200*frametime);
        }
    }
    if (pPlayer->getPosition().y > 0)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        {
            pPlayer->move(0, -200*frametime);
        }
    }
    
};