/* 
 * File:   GameFunctions.h
 * Author: Ahmed Elnoamany
 */
#ifndef GAMEFUNCTIONS_H
#define GAMEFUNCTIONS_H

using namespace std;
const int boardSize = 4; //4x4
class GameFunctions {

public:
    GameFunctions();
    char gameBoard[boardSize][boardSize];  //The Board.
    int winType;            //Who wins. 
    void clearGameBoard();  //Clears the Game Board.
    void drawGameBoard();   //Draws the Game Board.
    void xMove(int, int);   //Makes a move with X.
    void oMove(int, int);   //Makes a move with O.
    void printMove(int, int); //prints move.
    bool checkEmptySpot(int, int); //Checks if move is empty.
    bool gameWinner();      //Finds the game winner.
    bool isTie();               //Checks if game ends as a tie.
    char winnerInRows();        //Checks for winner in all rows.
    char winnerInColumns();     //Chacks for winner in all columns.
    char winnerInDiagonals();   ///Checks for winner in right and left diagonal.
    int numInRow(int, char);     //Number of characters in row.
    int numInCol(int, char);     //Number of characters in column.
    int numInLeftDiag(char);     //Number of characters in left diagonal.
    int numInRightDiag(char);    //Number of characters in right diagonal.
    int generateRandom(int, int);       //generates a random integer.
    void cpuWin();      //Checks if win is available for CPU and makes move.
private:

};

#endif /* GAMEFUNCTIONS_H */

