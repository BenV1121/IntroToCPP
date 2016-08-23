//benjamin.vongtawan@students.aie.edu.au
#include <iostream>

/*
	1. Find the value of each of the following expressionsw, or explain why it is not a valid expression. Try this without coding first.
	a) 2/3 + 3/5
	b) 2%3 + 3%5
	c) 23%15%-2
	d) 25*1/2
	e) 25*1.0/2
	f) 25*(1/2)
	g) 235/8+7
	h) 235/8.0+7
	i) ((20+1)/2-2.0) / (23+3) *0.2

	2. Select the suitible variable names you might use for:
	a) int studentAvgHeight;
	b) int medianIncome; = > 65000
	c) int povertyIncome; = < 5000
	d) int totalSteamExpenses;

	3. Select suitable data types to hold the following values:
	a) signed, unsigned, int
	b) float, double
	c) char
	d) signed, unsigned, int
	e) bool
	
*/

int main()
{
	printf("Hello World! \n"); // \n creates a new line

	// Variable Definition
		// I'm asking the computer for memory
		// This memory will be used or integer math
		// I've been given this variable this alias 'var'

	float var; // var is uninitialized

	// Variable Assignment and initialization
		//I'm using the literal value '12'
		// and assigning into my variable
		// first assignment is an initialization

	var = 12.5;

	// Variable Instatiation
		// When you define and initialize at the same time
	int ivar = var + 4;
	
	printf("%f %d \n", var, ivar);
	
	// #1

	printf("%d \n", (2 / 3 + 3 / 5));
	//false

	printf("%d \n", (2%3 + 3%5));
	//true

	printf("%d \n", (23 % 15 % -2));
	//false

	printf("%d \n", (25 * 1 / 2));
	//true

	printf("%f \n", (25 * 1.0 / 2));
	//false

	printf("%d \n", (25 * (1 / 2)));
	//false

	printf("%d \n", (235 / 8 + 7));
	//true

	printf("%f \n", (235 / 8.0 + 7));
	//false

	printf("%f \n", (((20 + 1) / 2 - 2.0) / (23 + 3) *0.2));
	//true

	// it works the same way, only the variables we are copying into needs
	// to be passed in using the 'address of' operator; & MORE ON THIS LATER
	//whereas printf prints information to the console, scanf reads information

	scanf_s("%f", &var);
	printf("%f %d \n", var, ivar);

	getchar();
}