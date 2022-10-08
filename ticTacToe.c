//Tic Tac Toe game with pvp or pve
#include <stdio.h>
#include <stdlib.h>


//declaration

char position[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';
const char COMP = 'O';

void drawBoard();
void resetBoard();
int winCheck();





int main() {

    int move;

    //Prompt user for game mode

    //Display the board
    board();


    //Ask for player move

    pritnf("You are X, what is your move?\n");
    printf("First select a column, left (1), middle (2), or right (3).\n");
    scanf("%d", &move);
    position[move] = {"X"};
    board();

    //Create tic tac toe board using print strings


    //Read info from console

    //Get player input and check for win loop 

    //random computer move (not pseudo random) Check code from lecture 9.3

    system("pause");

    return 0;
}

void board() {

    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", position[0], position[1], position[2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", position[3], position[4], position[5]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", position[6], position[7], position[8]);
    printf("+-----------+\n");
    }