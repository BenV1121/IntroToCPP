//benjamin.vongtawan@students.aie.edu.au
#include <iostream>

// Problem #7

int main()
{
	printf("Please insert two alphabetical characters: ");

	char userInputA = 0, userInputB = 0, median = 0;

	scanf_s(" %c %c", &userInputA, 1, &userInputB, 1);

	getchar(); //clear a hanging new line

	userInputA = (userInputA - 65) % 32 + 65;
	userInputB = (userInputB - 65) % 32 + 65;

	median = (userInputA + userInputB) / 2;

	printf("%c is between %c and %c", median, userInputA, userInputB);

	// Next goal is to convert the input to uppercase

	/*
	A  B  C  D
	65 66 67 68
	0  1  2  3
32%	0  1  2  3

	a  b  c  d
	97 97 99 100
	32 33 34 35
32%	0  1  2  3

	a % 32
	*/

	getchar();
}