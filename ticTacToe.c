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
int checkSpace();
void player1Move();
void player2Move();





int main() {
    resetBoard();

    //Prompt user for game mode



    //Display the board
    drawBoard();


    //Ask for player move
    playerMove();

    

    //Create tic tac toe board using print strings


    //Read info from console

    //Get player input and check for win loop 

    //random computer move (not pseudo random) Check code from lecture 9.3

    system("pause");

    return 0;
}

void drawBoard() {

    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", position[0][0], position[0][1], position[0][2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", position[1][0], position[1][1], position[1][2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", position[2][0], position[2][1], position[2][2]);
    printf("+-----------+\n");
    }

void resetBoard(){

}

int winCheck(){

}

int checkSpace(){

}

void playerMove(){

    int row;
    int col;

    pritnf("You are X, what is your move?\n");
    printf("First select a column, left (1), middle (2), or right (3).\n");
    scanf("%d", &col);
    printf("Now select a row, top (1), middle (2), or bottom (3)"); 
    scanf("%d", &row);
    row--;
    col--;
    if(position[row][col] != ' ')
    {

        printf(position[row][col]+" has already moved there.  Pick another space.\n");
    }
    else
    {
        position[row][col] = PLAYER1;
    }

}
void player2Move()
{

}