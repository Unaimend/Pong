#ifndef __Pong__Player2__
#define __Pong__Player2__
#include <SFML/Graphics.hpp>




class Player2
{
public:                 //FUNCTIONS
    Player2(sf::Vector2f position);
    ~Player2();
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
