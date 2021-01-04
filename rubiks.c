#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/***************************************************************
Rubik's cube scrambler program:

This program generates moves used to scramble a Rubik's cube
The amount of moves is specified by the user in the command line

For example - ./rubiks 10 generates a list of 10 random moves

Compile with: cc rubiks.c -o rubiks

Run with: ./rubiks [No. of moves]
***************************************************************/

#define ARRAY_LENGTH 18
#define STRING_SIZE 3

int main(int argc, char *argv[]){
	//18 is the array length, 3 is the max string size
	char arr[18][3] = {"F", "R", "U", "L", "B", "D",
					   "F'", "R'", "U'", "L'", "B'", "D'",
					   "F2", "R2", "U2", "L2", "B2", "D2"};

	srand(time(0));

		for (int i = 0; i < atoi(argv[1]); i++){

			int r = rand() % 18;
			printf("%s ", arr[r]);
		}

	printf("\n");
}
