/* 
 * File:   main.cpp
 * Author: Ahmed Elnoamany
 */
#include "GameMode.h"
#include "GameFunctions.h"
#include <cstdlib>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    bool exit = false;
    int difficulty;
    GameMode mode;
    printf("\t\tTIC TAC TOE\n");
    printf("----------------------------------------\n");
    while(!exit){
        printf("Choose a difficulty:\n");
        printf("1.Easy\n");
        printf("2.Medium\n");
        printf("3.Hard\n");
        scanf("%d", &difficulty);
        switch(difficulty){
            case 1:
                mode.easyMode();
                break;
            case 2:
                mode.mediumMode();
                break;
            case 3:
                mode.hardMode();
                break;
            default:
            printf("Please enter a valid difficulty");
        }
        //Add some way of exiting game.
    }
}

