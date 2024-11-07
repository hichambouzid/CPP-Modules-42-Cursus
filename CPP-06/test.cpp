#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	srand(time(0));
	std::cout << "========" << std::rand() % 3 << "============\n";
	// printf("%c\n", c);
}