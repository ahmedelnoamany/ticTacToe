/* 
 * File:   GameFunctions.cpp
 * Author: Ahmed Elnoamany
 * Created on September 22, 2016, 12:27 PM
 */

#include "GameFunctions.h"
#include <stdio.h>
using namespace std;

GameFunctions::clearGameBoard(){
    for(int i = 0; i<boardSize; i++){
        for(int j = 0; j<boardSize; j++)
            gameBoard[i][j]= ' ';   
    }
}

GameFunctions::drawGameBoard(){
    for(int i = 0; i<boardSize; i++)
        printf(" %d\n", i+1);
    for(int i = 0; i<boardSize; i++){
        printf("%d", i+1);
        for(int j = 0; j<boardSize; j++){
            printf("|%c\n", gameBoard[i][j]);
        }
        printf("|\n");
    }
}

GameFunctions::checkEmptySpot(int x, int y){
    if(gameBoard[x][y] == 'X'||gameBoard[x][y] == 'O')
        return false;
    else
        return true;
}

GameFunctions::xMove(int x, int y){
    gameBoard[x][y] = 'X';
}

GameFunctions::oMove(int x,int y){
    gameBoard[x][y] = 'O';
}


