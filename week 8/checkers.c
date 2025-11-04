//checkers

#include <stdio.h>


#define ROWS 8
#define COLS 8

//1. reset
void init_board(int board[ROWS][COLS]) {


	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = 0;
		}
	}

}

void setup_board(int board[ROWS][COLS]) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < COLS; j++) {
			if ((i + j) % 2 == 1) {
				board[i][j] = 1; 
			}
		}
	}

}
void print_board(int board[ROWS][COLS]) {

	printf("\n ");
	for (int j = 0; j < COLS; j++) {
		printf("%d", j);
	}
	printf("\n");



	for (int i = 0; i < ROWS; i++) {
		printf("%d|", i);
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] == 0) {
				printf(" . ");

			}
			else if (board[i][j] == 1) {
				printf("o ");
			}
			else if (board[i][j] == 2) {

				printf("x");
			}
		}
		printf("|\n");
	}



	printf(" ");
	for (int j = 0; j < COLS; j++) {
		printf("--");
	}
	printf("\n");

}

int main(void) {

	int board[ROWS][COLS];
	init_board(board);
	setup_board(board);
	print_board(board);

	return 0;
}