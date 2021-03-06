/*
Jeremy Harrell
ITSE 1301
Programming problem chess board
Making a chess board
Setting up a program that will display the look of a chess board

*/

#include "stdafx.h"
#include <iostream>
using namespace std; 

//setting up the constants for the rows and columns
const int INT_ROWS = 8;
const int INT_COLUMNS = 8;

//printing out the spots for teh pieces to be set on
void printSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << " ";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

//clears the spot and put in a *
void clearSpot(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			arySeats[intRow][intColumn] = '*';
		}
	}
}

//Programming to set the Symbol for each spot 
void Rook1(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'r';	
}

void Knight1(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'n';
}

void Bishop1(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'b';
}

void Queen1(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'q';
}

void King1(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'k';
}

void Pawn1(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'p';
}

void Rook2(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'R';
}

void Knight2(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'N';
}

void Bishop2(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'B';
}

void Queen2(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'Q';
}

void King2(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'K';
}

void Pawn2(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'P';
}

int main()
{
	//Setting up the coordinates for the rooks, knights, bishops, king, Queen, and pawns
	char arySeats[INT_ROWS][INT_COLUMNS];
	clearSpot(arySeats, INT_ROWS);
	Rook1(arySeats, INT_ROWS, 0, 0);
	Rook1(arySeats, INT_ROWS, 0, 7);
	Knight1(arySeats, INT_ROWS, 0, 1);
	Knight1(arySeats, INT_ROWS, 0, 6);
	Bishop1(arySeats, INT_ROWS, 0, 2);
	Bishop1(arySeats, INT_ROWS, 0, 5);
	Queen1(arySeats, INT_ROWS, 0, 3);
	King1(arySeats, INT_ROWS, 0, 4);
	Pawn1(arySeats, INT_ROWS, 1, 0);
	Pawn1(arySeats, INT_ROWS, 1, 1);
	Pawn1(arySeats, INT_ROWS, 1, 2);
	Pawn1(arySeats, INT_ROWS, 1, 3);
	Pawn1(arySeats, INT_ROWS, 1, 4);
	Pawn1(arySeats, INT_ROWS, 1, 5);
	Pawn1(arySeats, INT_ROWS, 1, 6);
	Pawn1(arySeats, INT_ROWS, 1, 7);

	Rook2(arySeats, INT_ROWS, 7, 0);
	Rook2(arySeats, INT_ROWS, 7, 7);
	Knight2(arySeats, INT_ROWS, 7, 1);
	Knight2(arySeats, INT_ROWS, 7, 6);
	Bishop2(arySeats, INT_ROWS, 7, 2);
	Bishop2(arySeats, INT_ROWS, 7, 5);
	Queen2(arySeats, INT_ROWS, 7, 3);
	King2(arySeats, INT_ROWS, 7, 4);
	Pawn2(arySeats, INT_ROWS, 6, 0);
	Pawn2(arySeats, INT_ROWS, 6, 1);
	Pawn2(arySeats, INT_ROWS, 6, 2);
	Pawn2(arySeats, INT_ROWS, 6, 3);
	Pawn2(arySeats, INT_ROWS, 6, 4);
	Pawn2(arySeats, INT_ROWS, 6, 5);
	Pawn2(arySeats, INT_ROWS, 6, 6);
	Pawn2(arySeats, INT_ROWS, 6, 7);
	printSeats(arySeats, INT_ROWS);
	return 0;
}


