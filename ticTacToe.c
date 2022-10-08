//Tic Tac Toe game with pvp or pve
#include <stdio.h>
#include <stdlib.h>


//declaration

char pos[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';
const char COMP = 'O';

void drawBoard();
void resetBoard();
int winCheck();
int checkSpace();
void player1Move();
void player2Move();
void computerMove();
void gameOver();
int players;


int main() 
{
    resetBoard();


    //Prompt user for game mode

    printf("How many players? (1 or 2)\n");
    scanf("%d", &players);
    
    //get moves

    switch(players) {
        case 1 : //PVP  
            while(winCheck != 1 && checkSpace !=0){
        
                //Display the board
                drawBoard();


                //Ask for player move
                if(winCheck !=1){
                    player1Move();
                }

                else{
                    gameOver();
                }

                drawBoard();

                if(winCheck !=1){
                    player2Move();
                }

                else{
                    gameOver();
                }
            }
            break;

        case 2 :  //PVE
            
             while(winCheck != 1)
            {
        
                //Display the board
                drawBoard();


                //Ask for player move
                if(winCheck !=1)
                {
                    player1Move();
                }

                else
                {
                    gameOver();
                }

                drawBoard();

                if(winCheck !=1)
                {
                    computerMove();
                }

                else
                {
                    gameOver();
                }
            }

            break;
    }

    
    


    

    //Create tic tac toe board using print strings


    //Read info from console

    //Get player input and check for win loop 

    //random computer move (not pseudo random) Check code from lecture 9.3

    system("pause");

    return 0;
}

void drawBoard() {

    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", pos[0][0], pos[0][1], pos[0][2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", pos[1][0], pos[1][1], pos[1][2]);
    printf("+-----------+\n");
    printf("| %c | %c | %c |\n", pos[2][0], pos[2][1], pos[2][2]);
    printf("+-----------+\n");
    }

void resetBoard(){
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            pos[i][j] = ' ';
        }
    }


}

int winCheck(){

    if(pos[0][0] == pos[0][1] && pos[0][1] == pos[0][2] )
    {
        return 1;
    }
     if(pos[1][0] == pos[1][1] && pos[1][1] == pos[1][2])
    {
        return 1;
    }
    if(pos[2][0] == pos[2][1] && pos[2][1] == pos[2][2])
    {
        return 1;
    }
    if(pos[0][0] == pos[1][0] && pos[1][0] == pos[2][0])
    {
        return 1;
    }
    if(pos[0][1] == pos[1][1] && pos[1][1] == pos[2][1])
    {
        return 1;
    }
    if(pos[0][2] == pos[1][2] && pos[1][2] == pos[2][2])
    {
        return 1;
    }
    if(pos[0][0] == pos[1][1] && pos[1][1] == pos[2][2])
    {
        return 1;
    }
    if(pos[0][2] == pos[1][1] && pos[1][1] == pos[2][0])
    {
        return 1;
    }
}

int checkSpace(){
    int movesLeft = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           if(pos[i][j] =! ' ')
           {
                movesLeft--;
           }
        }
    }
    return movesLeft;


}

void player1Move(){

    int row;
    int col;

    pritnf("You are X, what is your move?\n");
    printf("First select a column, left (1), middle (2), or right (3).\n\n");
    scanf("%d", &col);
    printf("\nNow select a row, top (1), middle (2), or bottom (3).\n\n"); 
    scanf("%d", &row);
    row--;
    col--;
    if(pos[row][col] != ' ')
    {

        printf(pos[row][col]+"\n has already moved there.  Pick another space.\n\n");
    }
    else
    {
        pos[row][col] = PLAYER1;
    }

}
void player2Move()
{
    int row;
    int col;

    pritnf("You are O, what is your move?\n");
    printf("First select a column, left (1), middle (2), or right (3).\n\n");
    scanf("%d", &col);
    printf("Now select a row, top (1), middle (2), or bottom (3)\n\n"); 
    scanf("%d", &row);
    row--;
    col--;
    if(pos[row][col] != ' ')
    {

        printf(pos[row][col]+" has already moved there.  Pick another space.\n\n");
    }
    else
    {
        pos[row][col] = PLAYER2;
    }

}

void computerMove()
{

}