/* 
 * File:   GameMode.cpp
 * Author: Ahmed Elnoamany
 */
#include "GameMode.h"
#include "GameFunctions.h"
#include <stdio.h>
#include <string>
#include <random>
#include <ctime>
using namespace std;

GameMode::GameMode(){
    gameCounter = 0;
    gameOver = false;
    GameFunctions gfun;
}

void GameMode::easyMode(){
    gfun.clearGameBoard();
    gameOver = false;
    char winner = ' ';
    if(gameCounter %2 == 0){ //even game, player first.
        while(gameOver !=true){
            gfun.drawGameBoard();
            playerMove();
            if(gfun.gameWinner() == true || gfun.isTie() == true){
                if(gfun.gameWinner() == true){
                    winner = 'P';
                }
                if(gfun.isTie() == true){
                    winner = 'T';
                }
                endGame(winner);
                return; 
            }
            else{
                gfun.drawGameBoard();
                cpuMove();
                if(gfun.gameWinner() == true || gfun.isTie() == true){
                if(gfun.gameWinner() == true){
                    winner = 'C';
                }
                if(gfun.isTie() == true){
                    winner = 'T';
                }
                endGame(winner);
                return;
                }
            }
        }
    }
    else{  //Odd game, CPU first
        gfun.clearGameBoard();
        while(gameOver != true){
            gfun.drawGameBoard();
            cpuMove();
            if(gfun.gameWinner() == true || gfun.isTie() == true){
                if(gfun.gameWinner() == true){
                    winner = 'C';
                }
                if(gfun.isTie() == true){
                    winner = 'T';
                } 
                endGame(winner);
                return;
            }
            else{
                gfun.drawGameBoard();
                playerMove();
                if(gfun.gameWinner() == true || gfun.isTie() == true){
                    if(gfun.gameWinner() == true){
                        winner = 'P';
                    }
                    if(gfun.isTie() == true){
                        winner = 'T';
                    }
                    endGame(winner);
                    return;
                }
            }
        }
    }
}

void GameMode::mediumMode(){
    
}

void GameMode::hardMode(){
    
}

void GameMode::playerMove(){
    int x, y;
    bool moved;
    while(moved != true){
        printf("Please enter your move as an x and a y from(%d,%d):\n", boardSize, boardSize);
        scanf("%d", &x);
        scanf("%d", &y);
        x -= 1;
        y -= 1;
        if(gfun.checkEmptySpot(x, y) != true)//Check if spot is empty
            printf("This move has already been played\n");
        else
            moved = true;
    }
    gfun.xMove(x,y);
}

void GameMode::cpuMove(){
    int x, y;
    bool moved = false;
    while(moved != true){
        x = gfun.generateRandom(0, boardSize);
        y = gfun.generateRandom(0, boardSize);
        if(gfun.checkEmptySpot(x,y) == true)
            moved = true;
    }
    gfun.printMove(x+1,y+1);
    gfun.oMove(x,y);
}

void GameMode::endGame(char winner){
    gfun.drawGameBoard();
    printf("\n");
    gameOver = true;
    gameCounter += 1;
    if(winner == 'P')
        printf("You Won\n");
    if(winner == 'C')
        printf("You Lose\n");
    else
        printf("You Tie\n");
}
