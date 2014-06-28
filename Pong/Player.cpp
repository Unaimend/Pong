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
};