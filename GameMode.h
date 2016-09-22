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
    void easyMode();
    void mediumMode();
    void hardMode();
private:

};

#endif /* GAMEMODE_H */

