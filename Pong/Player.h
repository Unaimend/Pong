#ifndef __Pong__Player__
#define __Pong__Player__
#include <SFML/Graphics.hpp>




class Player
{
public:                 //FUNCTIONS
    Player(sf::Vector2f position);
    ~Player();
    void                HandleEvents();
    void                Render(sf::RenderWindow *rw);
    void                Update(double frametime);
public:
    
protected:              //FUNCTIONS
    
protected:
    
private:                //FUNCTIONS

private:
    sf::Vector2f        *pSize;
    sf::RectangleShape  *pPlayer;

};
#endif /* defined(__Pong__Player__) */
