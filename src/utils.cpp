
#include "includes\Main.hpp"


void clearScreen() {
	system("cls");
}


void printCPPStandard() {
	printf("%li\n", __cplusplus);
}


void printLines(int n) {
	printf("\n");
	
	for (int i = 0; i < n; ++i) {
		printf("\n");
	}
}


void initializeProgram() {
	clearScreen();
	printCPPStandard();
	printLines(2);
}