/************************************************************
              'Tic Tac Toe' by spicymaterial
************************************************************/

#include<stdio.h>
#include<stdlib.h>
char board[10]={'o','1','2','3','4','5','6','7','8','9'};
int choice,num;
int check_winner()     //Function to check winner and return value respectively
{
    int val=0;
    if(board[1]==board[2]&&board[2]==board[3])
        val=1;
    else if(board[4]==board[5]&&board[5]==board[6])
        val=1;
    else if(board[7]==board[8]&&board[8]==board[9])
        val=1;
    else if(board[1]==board[4]&&board[4]==board[7])
        val=1;
    else if(board[2]==board[5]&&board[5]==board[8])
        val=1;
    else if(board[3]==board[6]&&board[6]==board[9])
        val=1;
    else if(board[1]==board[5]&&board[5]==board[9])
        val=1;
    else if(board[3]==board[5]&&board[5]==board[7])
        val=1;
    else if(board[1]!='1'&&board[2]!='2'&&board[3]!='3'&&board[4]!='4'&&board[5]!='5'&&
            board[6]!='6'&&board[7]!='7'&&board[8]!='8'&&board[9]!='9')
        val=-1;
    return val;
}
void markboard(char mark)      //Function to mark board 
{
    if(choice==1&&board[1]=='1')
        board[1]=mark;
    else if(choice==2&&board[2]=='2')
        board[2]=mark;
    else if(choice==3&&board[3]=='3')
        board[3]=mark;
    else if(choice==4&&board[4]=='4')
        board[4]=mark;
    else if(choice==5&&board[5]=='5')
        board[5]=mark;
    else if(choice==6&&board[6]=='6')
        board[6]=mark;
    else if(choice==7&&board[7]=='7')
        board[7]=mark;
    else if(choice==8&&board[8]=='8')
        board[8]=mark;
    else if(choice==9&&board[9]=='9')
        board[9]=mark;
    else
        {
            printf("Invalid Move!!");
            --num;
        }
}
void display_board()      //Function to display the board
{
    printf("\n\n");
	printf("            'Tic Tac Toe'\n");
	printf("            _____________\n\n");
	printf("    Player 1(X)        Player 2(O)'\n\n");
    printf("===========================================");
    printf("\n\n");
    printf("              |         |\n");
    printf("          %c   |    %c    |    %c\n",board[1],board[2],board[3]);
    printf("      ________|_________|________\n");
    printf("              |         |\n");
    printf("          %c   |    %c    |    %c\n",board[4],board[5],board[6]);
    printf("      ________|_________|________\n");
    printf("              |         |\n");
    printf("          %c   |    %c    |    %c\n",board[7],board[8],board[9]);
    printf("              |         |\n");
}

int main()
{
    int progress;
    char mark;
    int player;
    num=3;
    display_board();        //Displays board first time
    do
    { 
        player=(num%2)?1:2;       //Decides the player
        printf("Player %d, Enter a choice : ",player);
        scanf("%d",&choice);
        mark=(player==1)?'X':'O';
        markboard(mark);
        system("cls");
        display_board();        //Displays board after marking
        progress=check_winner();
        num++;

    }while(progress==0);
    if(progress==1)
    {
        printf("\n=============(Player %d Won!!)==============\n",player);
    }
    else if(progress==-1)
    {
        printf("\nGame Draw!!!");
    }
    return 0;
}
