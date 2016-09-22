/* 
 * File:   GameMode.cpp
 * Author: Ahmed Elnoamany
 */

#include "GameMode.h"

GameMode::GameMode() {
    
}

void GameMode::easyMode(){
    gfun.clearGameBoard();
    gameOver = false;
    char gameWinner = ' ';
    if(gameCounter %2 == 0){ //even game, player first.
        while(gameOver !=true){
            gfun.drawGameBoard();
            playerMove();
            if(gfun.gameWinner() == true){
                gameWinner = 'P';
            }
            if(gfun.isTie() == true){
                gameWinner = 'T';
            }
            endGame(gameWinner);
            return; 
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
        if(gfun.checkEmptySpot(x, y)! = true)//Check if spot is empty
            printf("This move has already been played\n");
        else
            moved = true;
    }
    gfun.xMove(x,y);
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
