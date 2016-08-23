//benjamin.vongtawan@students.aie.edu.au
// Problem #4
#include <iostream>

// Right-click solution -> Add -> New Project
	// named it swapper

// Right-click swapper -> Set as Startup Project
	//Add -> New Source File

// Create new projects for problem 6 and 7!
int main()
{
	int VARA, VARa, VaRa, Vara;
	int varA = 0, varB = 0, varC = 0;
	//printf("var currently stores: %d \n", var);
	printf("Insert two new integers: ");
	scanf_s("%d %d", &varA, &varB); //assign var a value from console
	getchar();			// inappropriate way to buffer
	printf("A: %d, B: %d \n", varA, varB);
	
	varC = varB;
	varB = varA;
	varA = varC;

	// Swap the values here!
	printf("Swap successful! (well, probably)\n");
	printf("A: %d, B: %d", varA, varB);
	getchar(); // prevent the program from closing
}