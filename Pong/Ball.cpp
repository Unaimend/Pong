#include "Ball.h"
Ball::Ball(sf::Vector2f position)
{
    pBall = new sf::RectangleShape;
    pSize = new sf::Vector2f(30,30);
    pBall->setSize(*pSize);
    pBall->setPosition(position);
}




Ball::~Ball()
{
}




void Ball::Render(sf::RenderWindow *rw)
{
    rw->draw(*pBall);
};




void Ball::HandleEvents()
{
    
};




void Ball::Update(double frametime)
{
    if (pBall->getPosition().y < 700)
    {
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
        {
            pBall->move(-200*frametime, 0);
        }
    }
    if (pBall->getPosition().y > 0)
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E))
        {
            pBall->move(200*frametime, 0);
        }
    }
    
};