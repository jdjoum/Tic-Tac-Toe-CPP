#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <vector>
#include <time.h>
using namespace std;

char player = 'X';
const int ROWS = 3;
const int COLUMNS = 3;
int moveCounter = 0;
int playerXWins = 0;
int playerOWins = 0;

char gameBoard[ROWS][COLUMNS] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void Draw()
{
	system("cls");
	std::cout << "        -------Welcome to Tic-Tac-Toe!-------  " << std::endl;
	std::cout << "  ---------Created By: Julian-Justin Djoum---------" << std::endl;
	std::cout << "  __________________________________________________" << std::endl << std::endl;
	
	for (int i = 0; i < ROWS; i++)
	{
		cout << "                        ";
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << gameBoard[i][j] << " ";
		}
		cout << endl;
	}
	/*cout << endl;
	cout << " Player X Wins: " << playerXWins << endl;
	cout << " Player O Wins: " << playerOWins << endl;
	cout << endl;*/
}

void Input()
{
	int userInput;
	cout << " Player " << player << "'s turn." << endl;
	cout << " Enter the number of the space you want to occupy on the Game Board: ";
	cin >> userInput;

	if (userInput == 1)
	{
		if(gameBoard[0][0] == '1')
			gameBoard[0][0] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 2)
	{
		if (gameBoard[0][1] == '2')
			gameBoard[0][1] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 3)
	{
		if (gameBoard[0][2] == '3')
			gameBoard[0][2] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 4)
	{
		if (gameBoard[1][0] == '4')
			gameBoard[1][0] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 5)
	{
		if (gameBoard[1][1] == '5')
			gameBoard[1][1] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 6)
	{
		if (gameBoard[1][2] == '6')
			gameBoard[1][2] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 7)
	{
		if (gameBoard[2][0] == '7')
			gameBoard[2][0] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 8)
	{
		if (gameBoard[2][1] == '8')
			gameBoard[2][1] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}
	else if (userInput == 9)
	{
		if (gameBoard[2][2] == '9')
			gameBoard[2][2] = player;
		else
		{
			cout << endl;
			cout << "                ";
			cout << "SPOT TAKEN, TRY AGAIN." << endl;
			cout << endl;
			Input();
		}
	}

	else
	{
		cout << endl;
		cout << "               ";
		cout << "INVALID INPUT, TRY AGAIN." << endl;
		cout << endl;
		Input();
	}

}

void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char Win()
{
	//Player X:
	//X Winning ROWS cases
	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X')
		return 'X';
	if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X')
		return 'X';
	if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X')
		return 'X';
	//X Winning COLUMNS Cases
	if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X')
		return 'X';
	if (gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'X')
		return 'X';
	if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X')
		return 'X';
	//X Winning Diagonally
	if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X')
		return 'X';
	if (gameBoard[2][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[0][2] == 'X')
		return 'X';

	//Player O:
	//O Winning ROWS cases
	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O')
		return 'O';
	if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O')
		return 'O';
	if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O')
		return 'O';
	//O Winning COLUMNS Cases
	if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O')
		return 'O';
	if (gameBoard[0][1] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][1] == 'O')
		return 'O';
	if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O')
		return 'O';
	//O Winning Diagonally
	if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O')
		return 'O';
	if (gameBoard[2][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[0][2] == 'O')
		return 'O';
	
	//Exception Return Case
	return '/';
}

int main()
{

	Draw();
	while (1)
	{
		moveCounter++;
		Input();
		Draw();
		if (Win() == 'X')
		{
			playerXWins++;
			cout << "                       ";
			cout << "X WINS!" << endl;
			cout << endl;
			break;
		}
		else if (Win() == 'O')
		{
			playerOWins++;
			cout << "                    ";
			cout << "O WINS!" << endl;
			cout << endl;
			break;
		}
		else if (Win() == '/' && moveCounter == 9)
		{
			cout << "                        ";
			cout << "DRAW!" << endl;
			cout << endl;
			break;
		}

		TogglePlayer();
	}
	system("pause");
	return 0;
}