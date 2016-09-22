/* 
 * File:   GameFunctions.cpp
 * Author: Ahmed Elnoamany
 * Created on September 22, 2016, 12:27 PM
 */

#include "GameFunctions.h"
#include <stdio.h>
#include <string>
#include <random>
#include <ctime>
using namespace std;

void GameFunctions::clearGameBoard(){
    for(int i = 0; i<boardSize; i++){
        for(int j = 0; j<boardSize; j++)
            gameBoard[i][j]= ' ';   
    }
}

void GameFunctions::drawGameBoard(){
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

bool GameFunctions::checkEmptySpot(int x, int y){
    if(gameBoard[x][y] == 'X'||gameBoard[x][y] == 'O')
        return false;
    else
        return true;
}

void GameFunctions::xMove(int x, int y){
    gameBoard[x][y] = 'X';
}

void GameFunctions::oMove(int x,int y){
    gameBoard[x][y] = 'O';
}

void GameFunctions::printMove(int x, int y){
    printf("Move is row %d, column %d\n", x, y);
}

bool GameFunctions::gameWinner(){
    if(winnerInRows() == 'X'||winnerInRows() == 'Y')
        return true;
    else if(winnerInColumns() == 'X' || winnerInColumns() == 'Y')
        return true;
    else if(winnerInDiagonals() == 'X' || winnerInDiagonals() == 'Y')
        return true;
    else
        return false;
}

bool GameFunctions::isTie(){
    int spotsTaken = 0;
    for(int i = 0; i<boardSize; i++){
        for(int j = 0; j<boardSize; j++){
            if(gameBoard[i][j] == 'X' || gameBoard[i][j] == 'O')
                spotsTaken++;
            }
        }
    if(spotsTaken == (boardSize*boardSize))
        return true;
    else
        return false;
}

char GameFunctions::winnerInRows(){
    int xs, os;
    for(int i = 0; i<boardSize; i++){
        xs =0;
        os = 0;
        for(int j = 0; j<boardSize; j++){
            if(gameBoard[i][j] == 'X')
                xs++;
            else if(gameBoard[i][j] == 'O')
                os++;
        }
        if(xs == boardSize)
            return 'X';
        else if(os == boardSize)
            return 'O';
        }
    }
char GameFunctions::winnerInColumns(){
    int xs, os;
    for(int i = 0; i<boardSize; i++){
        xs =0;
        os = 0;
        for(int j = 0; j<boardSize; j++){
            if(gameBoard[j][i] == 'X')
                xs++;
            else if(gameBoard[j][i] == 'O')
                os++;
        }
        if(xs == boardSize)
            return 'X';
        else if(os == boardSize)
            return 'O';
        }
}
char GameFunctions::winnerInDiagonals(){
    int xs, os;
    for(int i = 0; i<boardSize; i++){ //right diagonal
        if(gameBoard[i][i] == 'X')
            xs++;
        else if(gameBoard[i][i] == 'O')
            os++;
        }
        if(xs == boardSize)
            return 'X';
        else if(os == boardSize)
            return 'O';
        
        xs = 0;
        os = 0;
        for(int i = 0; i<boardSize; i++){  //left diagonal
            if(gameBoard[i][boardSize-1-i] == 'X')
                xs++;
            else if(gameBoard[i][boardSize-1-i] == 'O')
                os++;
        }
        if(xs == boardSize)
            return 'X';
        else if(os == boardSize)
            return 'O';
        }

int GameFunctions::generateRandom(int min, int max){
    static bool first = true;
    if(first){
        srand(time(NULL));
        first = false;
    }
    return min+rand() %(max - min);
}



