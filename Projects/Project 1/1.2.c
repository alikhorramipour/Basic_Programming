//A.Khorrami Pour - 9631407
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char table[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board(int SoT)
{
	system("cls");
	if(SoT)
		printf("Two Player Tic Tac Toe\n");
	else
		printf("Single Player Tic Tac Toe\n");

	printf("Player 1 (X)  -  Player 2 (O)\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c\n", table[1], table[2], table[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c\n", table[4], table[5], table[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c\n", table[7], table[8], table[9]);
	printf("     |     |     \n\n");
}


int checkWin()
{
	if (table[1] == table[2] && table[2] == table[3])		return 1;
	else if (table[4] == table[5] && table[5] == table[6])	return 1;
	else if (table[7] == table[8] && table[8] == table[9])	return 1;
	else if (table[1] == table[4] && table[4] == table[7])	return 1;
	else if (table[2] == table[5] && table[5] == table[8])	return 1;
	else if (table[3] == table[6] && table[6] == table[9])	return 1;
	else if (table[1] == table[5] && table[5] == table[9])	return 1;
	else if (table[3] == table[5] && table[5] == table[7])	return 1;
	else if (table[1] != '1' && table[2] != '2' && table[3] != '3' && table[4] != '4' && table[5] != '5' && table[6] != '6' && table[7] != '7' && table[8] != '8' && table[9] != '9')
		return 0;
	else	return -1;
}

int checkTable(int choice)
{
	if (choice > 10 || choice < 1)
		return 0;
	else if (choice == 1 && table[1] == '1')
		return 1;
	else if (choice == 2 && table[2] == '2')
		return 1;
	else if (choice == 3 && table[3] == '3')
		return 1;
	else if (choice == 4 && table[4] == '4')
		return 1;
	else if (choice == 5 && table[5] == '5')
		return 1;
	else if (choice == 6 && table[6] == '6')
		return 1;
	else if (choice == 7 && table[7] == '7')
		return 1;
	else if (choice == 8 && table[8] == '8')
		return 1;
	else if (choice == 9 && table[9] == '9')
		return 1;
	return 0;
}

int minimax(int board[9], int player)
{
    //How is the position like for player (their turn) on board?
    int winner = win(board);
    if(winner != 0) return winner*player;
    move = -1;
    int score = -2;//Losing moves are preferred to no move
    int i;
    for(i = 0; i < 9; ++i)
    {//For all moves,
        if(board[i] == 0)
        {//If legal,
            board[i] = player;//Try the move
            int thisScore = -minimax(board, player*-1);
            if(thisScore > score)
            {
                score = thisScore;
                move = i;
            }//Pick the one that's worst for the opponent
            board[i] = 0;//Reset board after try
        }
    }
}

void computerMove(char table[9])
{
    int move = -1;
    int score = -2;
    int i;
    for(i = 1; i < 10; ++i)
    {
        if(board[i] == 0)
        {
            board[i] = 1;
            int tempScore = -minimax(board, -1);
            board[i] = 0;
            if(tempScore > score)
            {
                score = tempScore;
                move = i;
            }
        }
    }
    //returns a score based on minimax tree at a given node.
    board[move] = 1;
}


void singlePlayer()
{
	int player = 1, result = -1, choice;
	char mark;
	while(result==-1)
	{
		board(1);
		if(player%2)
			player = 1;
		else
			player = 2;
		printf("Player %d Where do you want to place your mark? ", player);
		scanf("%d", &choice);
		if(player == 1)
			mark = 'X';
		else
			mark = 'O';
		if(checkTable(choice))	table[choice] = mark;
		else
		{
			printf("Invalid Move! ");
			Sleep(800);
			player--;
		}
		result = checkWin();
		player++;
	}
	board(1);
	if(result)	printf("\aPlayer %d Won!\n", --player);
	else	printf("\aResult : Draw!\n");
}

void twoPlayer()
{
	int player = 1, result = -1, choice;
	char mark;
	while(result==-1)
	{
		board(1);
		if(player%2)
			player = 1;
		else
			player = 2;
		printf("Player %d Where do you want to place your mark? ", player);
		scanf("%d", &choice);
		if(player == 1)
			mark = 'X';
		else
			mark = 'O';
		if(checkTable(choice))	table[choice] = mark;
		else
		{
			printf("Invalid Move! ");
			Sleep(800);
			player--;
		}
		result = checkWin();
		player++;
	}
	board(1);
	if(result)	printf("\aPlayer %d Won!\n", --player);
	else	printf("\aResult : Draw!\n");
}



int main()
{

	int SoT = 0;
	system("cls");
	printf("Hi!\n");
	Sleep(800);
	printf("Welcome to Tictactoe!\n");
	Sleep(800);
	printf("Enter '0'(Zero) for Single Player Mode or any Other Number for Two Player Mode: ");
	scanf("%d", &SoT);
	SoT = !!SoT;
	if(SoT)	twoPlayer();
	//else	singlePlayer();
	system("pause");
	return 0;
}
