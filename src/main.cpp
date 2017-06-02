
#include "includes\Main.hpp"

union _value {
	int v;
	double d;
};

struct _equationNode {
	union _value value;
	struct _equationNode *next;
};

//void printEquation(struct _equationNode *head);

const int DIMENSION = 10;


int main()
{
	initializeProgram();
	
	FILE *fp = fopen("test.dat", "w");
	
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			fprintf(fp, "%2i ", i + j);
		}
		fprintf(fp, "\n");
	}
	
	fclose(fp);
	
	/*
	struct _equationNode n1;
	n1.value.d = 1.5;
	
	std::cout << n1.value.d << '\n';
	*/
	
	return EXIT_SUCCESS;
}