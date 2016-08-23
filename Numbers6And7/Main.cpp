//benjamin.vongtawan@students.aie.edu.au
#include <iostream>

int main()
{
	//#6

	int a = 0,
		b = 0,
		c = 0,
		d = 0,
		e = 0;

	printf("Insert 5 integers: "); //prompt user
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e); //assign var a

	int avg = (a + b + c + d + e) / 5;

	printf("The average is %d \n", avg);

	system("pause");

	//I lied, there is no problem #7.
}