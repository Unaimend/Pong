#include "Framework.h"
#include "SFML/Graphics.hpp"
#include "Collision.h"

//Todo
/*
    spieler richtung abfrgae y richtung wenn nach obenn dann nach untenn wenn still dann gerade wenn nach unten dann nach oben
 
 */
#include "iostream"

using namespace Collision;

Framework::Framework()
{
    pRenderWindow = new sf::RenderWindow(sf::VideoMode(1600,900,32), "PONG by Thomas Dost v1.0.0");
    pRenderWindow->setVerticalSyncEnabled(true);
    pMainEvent = new sf::Event;
    pClock = new sf::Clock;
    pPlayer = new Player(sf::Vector2f(30,500));
    pPlayer2 = new Player2(sf::Vector2f(1550,500));
    pBall = new Ball(sf::Vector2f(800,450));
    
    
};



Framework::~Framework()
{
//    delete pRenderWindow;
//    delete pMainEvent;
//    
//    pRenderWindow   = nullptr;
//    pMainEvent      = nullptr;
};




void Framework::Run()
{
    while (mRun)
    {
        Update(mFrametime);
        HandleEvents();
        Render();
        GetFrameTime();
    }

};


void Framework::Render()
{
    pRenderWindow->clear(sf::Color(120,0,120,255));
    pPlayer->Render(pRenderWindow);

    pPlayer2->Render(pRenderWindow);
    
    pBall->Render(pRenderWindow);
  
    pRenderWindow->display();
};




void Framework::Update(double frametime)
{
    pPlayer->Update(frametime);
    pPlayer2->Update(frametime);
    pBall->Update(frametime);
    if(PixelPerfectTest(pPlayer->getSprite(), pBall->getBall()) == true)
    {
        std::cout << "JUHU" ;
        pBall->setMoveSPeed(600 );

        
    }
    if(PixelPerfectTest(pPlayer2->getPlayer(), pBall->getBall()) == true)
    {
        std::cout << "JUHU" ;
        pBall->setMoveSPeed(-600 );

        
    }
    if(pBall->getBall().getPosition().x <= 0)
    {
        pBall->getBall().setPosition(800,450 );
        pBall->setNewPos(true);
       // pBall->setPosition(sf::Vector2f(500,500));
    }
    if(pBall->getBall().getPosition().x >= 1580)
    {
        pBall->setNewPos(true);
    }
    if(pBall->getBall().getPosition().y <= 10)
    {
        
        pBall->setMoveSPeed2(600 );
        
    }
    if(pBall->getBall().getPosition().y >= 870)
    {
        
        pBall->setMoveSPeed2(-600 );
        
    }
   
};





void Framework::HandleEvents()
{
    while (pRenderWindow->pollEvent(*pMainEvent))
    {
        if (pMainEvent->type == sf::Event::Closed)
        {
            mRun = false;
        }

    }
};




void Framework::GetFrameTime()
{
    mFrametime = pClock->getElapsedTime().asSeconds();
    // std::cout << mFrameTime << std::endl;
    pClock->restart();
    
}
