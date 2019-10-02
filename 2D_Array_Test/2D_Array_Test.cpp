// 2D_Array_Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "math.h"


int main()
{
	srand((unsigned)time(NULL));

	const int column = 6000;
	const int row = 170;

	char arr[column][row];

	while (true) {
		int seed = rand() % row / 10;
		bool checkIfFinished = false;
		bool maxOut = false;

		for (int i = 0; i < column; i++) {
			checkIfFinished = true;
			maxOut = true;

			for (int j = 0; j < row; j++) {
				int mozo = rand() % 3 - 1; //generates 1, 0, or -1 at random
				
				if (j == seed && i == 0) {
					arr[i][j] = 'A';
					checkIfFinished = false;
				}
				else if (j == seed * 2 && i == 0) {
					arr[i][j] = 'B';
					checkIfFinished = false;
				}
				else if (j == seed * 3 && i == 0) {
					arr[i][j] = 'C';
					checkIfFinished = false;
				}
				else if (j == seed * 4 && i == 0) {
					arr[i][j] = 'D';
					checkIfFinished = false;
				}
				else if (j == seed * 5 && i == 0) {
					arr[i][j] = 'E';
					checkIfFinished = false;
				}
				else if (j == seed * 6 && i == 0) {
					arr[i][j] = 'F';
					checkIfFinished = false;
				}
				else if (j == seed * 7 && i == 0) {
					arr[i][j] = 'G';
					checkIfFinished = false;
				}
				else if (j == seed * 8 && i == 0) {
					arr[i][j] = 'H';
					checkIfFinished = false;
				}
				else if (j == seed * 9 && i == 0) {
					arr[i][j] = 'X';
					checkIfFinished = false;
				}
				else if (j == seed * 10 && i == 0) {
					arr[i][j] = 'Y';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'A') {
					arr[i][j] = 'A';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'B') {
					arr[i][j] = 'B';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'C') {
					arr[i][j] = 'C';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'D') {
					arr[i][j] = 'D';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'E') {
					arr[i][j] = 'E';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'F') {
					arr[i][j] = 'F';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'G') {
					arr[i][j] = 'G';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'H') {
					arr[i][j] = 'H';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'X') {
					arr[i][j] = 'X';
					checkIfFinished = false;
				}
				else if (arr[i - 1][j + mozo] == 'Y') {
					arr[i][j] = 'Y';
					checkIfFinished = false;
				}
				else {
					arr[i][j] = ' ';
					maxOut = false;
				}
				printf("%c", arr[i][j]);
			}
			if (checkIfFinished == true) {
				printf("\nKilled at line: %d\n", i);
				i = column;
			}
			else if (maxOut == true) {
				printf("\nMaxed out at line: %d\n", i);
				i = column;
			}
			printf("\n");
		}
		getchar();
	}
    return 0;
}

