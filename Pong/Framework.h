#ifndef __Pong__Framework__
#define __Pong__Framework__
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Player2.h"
#include "Ball.h"
#include "Collision.h"
class Framework
{
public:                 //FUNCTIONS
    
                        Framework();
                        ~Framework();
    void                Run();
public:
    
protected:              //FUNCTIONS
    
    
protected:
    
private:                //FUNCTIONS
    void                HandleEvents();
    void                Render();
    void                Update(double frametime);
    void                GetFrameTime();
private:
    sf::Clock           *pClock;
    double              mFrametime;
    sf::RenderWindow    *pRenderWindow;
    sf::Event           *pMainEvent;
    bool mRun =         true;
    Player              *pPlayer;
    Player2             *pPlayer2;
    Ball                *pBall;
    sf::Text            mtext;
    sf::Font font;
    sf::Text            mtext2;
    sf::Font            font2;
     char player2score[2] = "0";
    char playerscore[2] = "0";
    
};

#endif /* defined(__Pong__Framework__) */
