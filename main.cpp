/* 
 * File:   main.cpp
 * Author: Ahmed Elnoamany
 */
#include <cstdlib>
#include <string>
#include <stdio.h>

#include "GameMode.h"
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
        scanf("%d", %difficulty);
        case(difficulty){
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
    return 0;
}

