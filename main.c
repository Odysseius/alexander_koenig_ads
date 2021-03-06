#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	printf("Welcome to Tic Tac Toe (Naughts and Crosses)\n\n");
	
	char gamesave[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
	short int boolPlayer = 0;
	char symbols[2] = {'O', 'X'};

	printf("   %c|%c|%c\n", gamesave[0], gamesave[1], gamesave[2]);
	printf("   -|-|-\n");
	printf("   %c|%c|%c\n", gamesave[3], gamesave[4], gamesave[5]);
	printf("   -|-|-\n");
	printf("   %c|%c|%c\n", gamesave[6], gamesave[7], gamesave[8]);
	
	do {
		printf("Player %hd, Enter a Letter, corresponding to the space you want to fill. Entering the wrong character will forfeit your turn.\n", boolPlayer + 1);
		char input;
		scanf(" %c", &input);

		if(input == 65 || input == 97 && gamesave[0] == 65) {
			gamesave[0] = symbols[boolPlayer];
		} else if((input == 66 || input == 98) && gamesave[1] == 66) {
			gamesave[1] = symbols[boolPlayer];
		} else if((input == 67 || input == 99) && gamesave[2] == 67) {
			gamesave[2] = symbols[boolPlayer];
		} else if((input == 68 || input == 100) && gamesave[3] == 68) {
			gamesave[3] = symbols[boolPlayer];
		} else if((input == 69 || input == 101) && gamesave[4] == 69) {
			gamesave[4] = symbols[boolPlayer];
		} else if((input == 70 || input == 102) && gamesave[5] == 70) {
			gamesave[5] = symbols[boolPlayer];
		} else if((input == 71 || input == 103) && gamesave[6] == 71) {
			gamesave[6] = symbols[boolPlayer];
		} else if((input == 72 || input == 104) && gamesave[7] == 72) {
			gamesave[7] = symbols[boolPlayer];
		} else if((input == 73 || input == 105) && gamesave[8] == 73) {
			gamesave[8] = symbols[boolPlayer];
		}
	
		printf("");
		printf("   %c|%c|%c\n", gamesave[0], gamesave[1], gamesave[2]);
		printf("   -|-|-\n");
		printf("   %c|%c|%c\n", gamesave[3], gamesave[4], gamesave[5]);
		printf("   -|-|-\n");
		printf("   %c|%c|%c\n", gamesave[6], gamesave[7], gamesave[8]);
		
		if(gamesave[0] == gamesave[1] && gamesave[1] == gamesave[2]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[3] == gamesave[4] && gamesave[4] == gamesave[5]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[6] == gamesave[7] && gamesave[7] == gamesave[8]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[0] == gamesave[3] && gamesave[3] == gamesave[6]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[1] == gamesave[4] && gamesave[4] == gamesave[7]) {
			printf("Player %hd has won!", boolPlayer + 1);	
			break;
		} else if(gamesave[2] == gamesave[5] && gamesave[5] == gamesave[8]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[0] == gamesave[4] && gamesave[4] == gamesave[8]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[2] == gamesave[4] && gamesave[4] == gamesave[6]) {
			printf("Player %hd has won!", boolPlayer + 1);
			break;
		} else if(gamesave[0] != 65 && gamesave[1] != 66 && gamesave[2] != 67 &&
			gamesave[3] != 68 && gamesave[4] != 69 && gamesave[5] != 70 &&
			gamesave[6] != 71 && gamesave[7] != 72 && gamesave[8] != 73) {
			printf("Tie!");
			break;
		}
		
		if (boolPlayer == 0) {
			boolPlayer = 1;
		} else {
			boolPlayer = 0;
		}
		
	} while (1);
	
	return 0;
}