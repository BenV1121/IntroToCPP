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
*/

int main()
{
	printf("Insert an integer, a char, then a float: ");

	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

	char foo;
	std::cin >> foo;
}