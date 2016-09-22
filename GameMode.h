/* 
 * File:   GameMode.h
 * Author: Ahmed Elnoamany
 */
#ifndef GAMEMODE_H
#define GAMEMODE_H
#include "GameMode.h"
#include "GameFunctions.cpp"
using namespace std;
class GameMode{
public:
    GameMode();
    GameFunctions gfun;
    bool gameOver;
    int gameCounter;
    void easyMode();
    void mediumMode();
    void hardMode();
    void playerMove();
    void endGame(char);
private:

};

#endif /* GAMEMODE_H */

