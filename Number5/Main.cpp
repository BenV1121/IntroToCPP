//benjamin.vongtawan@students.aie.edu.au
#include <iostream>

/*
	#5
	a) i: 1 ch: A f: 45
	b) error
	c) i: 1  ch: error  f: 45
	d) i: 1  ch: error  f: error
	e) error 
	f) error 

	#5b
	a) i: 1 ch: A f: 45
	b) i: 1 ch: A f: 45
	c) i: 1  ch: 9  f: 45
	d) i: 1  ch: 9  f: 45
	e) i: B
	f) i:  
*/

int main()
{
	printf("Insert an integer, a char, then a float: ");

	int i = 0;
	float f = 0;
	char ch = 'a';
	
	scanf_s("%i %c %f", &i, &ch, 1, &f);
	getchar(); //clear a hanging new line
	printf("%i %c %f", i, ch, f);
	getchar(); //pause the program
}