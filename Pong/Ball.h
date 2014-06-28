#ifndef __Pong__Ball__
#define __Pong__Ball__
#include <SFML/Graphics.hpp>




class Ball
{
public:                 //FUNCTIONS
    void                Render(sf::RenderWindow *rw);
    sf::RectangleShape getBall(){return *pBall;};
    void                Update(double frametime);
    Ball(sf::Vector2f position);
    ~Ball();
public:
    
protected:              //FUNCTIONS
    
protected:
    
private:                //FUNCTIONS

private:
    sf::RectangleShape *pBall;
    sf::Vector2f *pSize;

};
#endif /* defined(__Pong__Ball__) */
