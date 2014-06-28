#include "Player.h"
Player::Player(sf::Vector2f position)
{
    pPlayer = new sf::RectangleShape;
    pSize = new sf::Vector2f(15,200);
    pPlayer->setSize(*pSize);
    pPlayer->setPosition(position);
}




Player::~Player()
{
}




void Player::Render(sf::RenderWindow *rw)
{
    rw->draw(*pPlayer);
};




void Player::HandleEvents()
{
    
};




void Player::Update(double frametime)
{
    if (pPlayer->getPosition().y < 700)
    {
     
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
            pPlayer->move(0, 200*frametime);
        }
    }
    if (pPlayer->getPosition().y > 0)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        {
            pPlayer->move(0, -200*frametime);
        }
    }

};