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
#include <iostream>
using namespace std;

GameFunctions::GameFunctions(){
    
}

void GameFunctions::clearGameBoard(){
    for(int i = 0; i<boardSize; i++){
        for(int j = 0; j<boardSize; j++)
            gameBoard[i][j]= ' ';   
    }
}

void GameFunctions::drawGameBoard(){
    printf("\n");
    for(int i = 0; i<boardSize; i++)
        printf(" %d",i+1);
    printf("\n");
    for(int i = 0; i<boardSize; i++){
        printf("%d",i+1);
        for(int j = 0; j<boardSize; j++){
            printf("|%c",gameBoard[i][j]);
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

void GameFunctions::cpuWin(){
    int x, y;
    if(winType == 1){  //1 = CPU win available in row.
        for(int i = 0; i< boardSize; i++){
            if(numInRow(i, 'O') == boardSize -1 && numinRow(i, 'X')== 0){
                x = i;
            }
        }
        y = 
    }
    else if(winType == 2){  //2 = CPU win available in column.
        
    }
    else if(winType == 3){  //3 = CPU win available in right diagonal.
        
    }
    else{                   //CPU win available in left diagonal.
        
    }
}

int GameFunctions::numInRow(int row, char target){
    int count = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[row][i] == target)
            count++;
    }
    return count;
}

int GameFunctions::numInCol(int col, char target){
    int count = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[i][col] == target)
            count++;
    }
    return count;
}

int GameFunctions::numInLeftDiag(char target){
    int count = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[i][boardSize - 1 - i] == target)
            count++;
    }
    return count;
}

int GameFunctions::numInRightDiag(char target){
    int count = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[i][boardSize -1 -i] == target)
            count++;
    }
    return count;
}

int GameFunctions::findEmptyInRow(int row){
    int emptySpot = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[row][i] == 'O'){
            emptySpot++;
        }
    }
    return emptySpot;
}

int GameFunctions::findEmptyInCol(int col){
    int emptySpot = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[i][col] == 'O'){
            emptySpot++;
        }
    }
    return emptySpot;
}

int GameFunctions::findEmptyInLDiag(){
    int emptySpot = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[i][i] == 'O'){
            emptySpot++;
        }
    }
    return emptySpot;
}

int GameFunctions::findEmptyInRDiag(){
    int emptySpot = 0;
    for(int i = 0; i<boardSize; i++){
        if(gameBoard[i][boardSize -1 -i] == 'O'){
            emptySpot++;
        }
    }
    return emptySpot;
}