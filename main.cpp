#include <iostream>
#include "calcFunc.h"


int main()
{
	std::cout << "Some clac functions:" << std::endl;
	std::cout << "First Change" << std::endl;
	std::cout << "Second Change" << std::endl;
	std::cout << "Third Change" << std::endl;

	std::cout << "Ali Jafarzadeh" << std::endl;
	std::cout << "Ali Jafarzadeh_2" << std::endl;
	std::cout << "CHECK STASH" << std::endl;
	std::cout << "CHECK RESET" << std::endl;
	std::cout << "CHECK BRANCH" << std::endl;
	std::cout << "CHECK Conflict" << std::endl;

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
