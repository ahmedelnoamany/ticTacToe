/* 
 * File:   GameFunctions.h
 * Author: Ahmed Elnoamany
 */
#ifndef GAMEFUNCTIONS_H
#define GAMEFUNCTIONS_H

const int boardSize = 4; //4x4
class GameFunctions {

public:
    GameFunctions();
    char gameBoard[boardSize][boardSize];
    void clearGameBoard();
private:

};

#endif /* GAMEFUNCTIONS_H */

