#include <iostream>
#include "calcFunc.h"


int main()
{
	std::cout << "Hello World :)" << std::endl;

	size_t a   = 12;
	size_t b   = 13;
	size_t res = 0;

	add(res, a, b);
	std::cout << "ADD: res is: " << res << std::endl;

	mul(res, a, b);
	std::cout << "MUL: res is: " << res << std::endl;

	dev(res, a, b);
	std::cout << "DEV: res is: " << res << std::endl;

	sub(res, a, b);
	std::cout << "SUB: res is: " << res << std::endl;

	return 0;
}
