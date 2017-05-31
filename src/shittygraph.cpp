
#include "includes\Main.hpp"


void drawShittyGraph(int dimension) {
	for (int i = 0; i < dimension; ++i) {
		for (int j = 0; j < dimension; ++j) {
			if (j == (dimension / 2) - 1) {
				printf("| ");
			} else if (i == (dimension / 2) - 1) {
				printf("- ");
			} else {
				printf(". ");
			}
		}
		printf("\n");
	}
}