#include "Framework.h"
#include "SFML/Graphics.hpp"
#include "Collision.h"

//Todo
/*
    spieler richtung abfrgae y richtung wenn nach obenn dann nach untenn wenn still dann gerade wenn nach unten dann nach oben
    IsPResseed duch was anderes ersetzen, weil wegen performance
 */
#include "iostream"

using namespace Collision;

Framework::Framework()
{
    pRenderWindow = new sf::RenderWindow(sf::VideoMode(1600,900,32), "PONG by Thomas Dost v1.1.0");
    pRenderWindow->setVerticalSyncEnabled(true);
    pMainEvent = new sf::Event;
    pClock = new sf::Clock;
    pPlayer = new Player(sf::Vector2f(30,500));
    pPlayer2 = new Player2(sf::Vector2f(1550,500));
    pBall = new Ball(sf::Vector2f(800,450));
   
    
    
    mtext.setColor(sf::Color::Blue);
    mtext.setStyle(sf::Text::Bold);
    if(!font.loadFromFile("/Users/Thomas/Desktop/Fertige Projekte/Pong/Pong/sansation.ttf"))
    {std::cout << "KEINE SCHRIFT ";};
    mtext.setPosition(750,20 );
    mtext.setCharacterSize(30);
    mtext.setFont(font);
    mtext.setString(player2score);
    
    mtext2.setColor(sf::Color::Blue);
    mtext2.setStyle(sf::Text::Bold);
    if(!font.loadFromFile("/Users/Thomas/Desktop/Fertige Projekte/Pong/Pong/sansation.ttf"))
    {std::cout << "KEINE SCHRIFT ";};
    mtext2.setPosition(850,20 );
    mtext2.setCharacterSize(30);
    mtext2.setFont(font);
    mtext2.setString(playerscore);
    
    
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
    pRenderWindow->draw(mtext);
    pRenderWindow->draw(mtext2);
    pRenderWindow->display();
   
};




void Framework::Update(double frametime)
{
    pPlayer->Update(frametime);
    pPlayer2->Update(frametime);
    pBall->Update(frametime);
    if(PixelPerfectTest(pPlayer->getSprite(), pBall->getBall()) == true)
    {
       
        pBall->setMoveSPeed(600 );

        
    }
    if(PixelPerfectTest(pPlayer2->getPlayer(), pBall->getBall()) == true)
    {
        
        pBall->setMoveSPeed(-600 );
     
        
    }
    if(pBall->getBall().getPosition().x <= 0)
    {
        pBall->getBall().setPosition(800,450 );
        pBall->setNewPos(true);
        player2score[0] = player2score[0] + 1;
        mtext.setString( player2score);
        
       // pBall->setPosition(sf::Vector2f(500,500));
    }
    if(pBall->getBall().getPosition().x >= 1580)
    {
        pBall->setNewPos(true);
        playerscore[0] = playerscore[0] + 1;
        mtext2.setString( playerscore);
        
        
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
