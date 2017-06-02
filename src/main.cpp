
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


int main()
{
	initializeProgram();
	
	int m, n;
	fprintf(stdout, "Please enter two numbers: ");
	fscanf(stdin, "%i %i", &m, &n);
	FILE *fp = fopen("test.dat", "w");
	
	int r = m % n;
	
	fprintf(fp, "r = %i, m = %i, n = %i\n", r, m, n);
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
		
		fprintf(fp, "r = %i, m = %i, n = %i\n", r, m, n);
	}
	
	fclose(fp);
	/*
	struct _equationNode n1;
	n1.value.d = 1.5;
	
	std::cout << n1.value.d << '\n';
	*/
	
	return EXIT_SUCCESS;
}