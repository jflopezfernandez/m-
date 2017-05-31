
#include "includes\Main.hpp"

union _value {
	int v;
	double d;
};

struct _equationNode {
	union _value value;
	struct _equationNode *next;
};


int main()
{
	initializeProgram();
	
	struct _equationNode n1;
	n1.value.d = 1.5;
	
	std::cout << n1.value.d << '\n';
	
	
	return EXIT_SUCCESS;
}