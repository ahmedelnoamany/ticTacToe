/* 
 * File:   GameMode.h
 * Author: Ahmed Elnoamany
 */
#ifndef GAMEMODE_H
#define GAMEMODE_H
#include "GameFunctions.h"

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
    void cpuMove();
    void endGame(char);
private:

};

#endif /* GAMEMODE_H */

