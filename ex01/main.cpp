#include <iostream>
#include <cstdlib>
#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);
	std::cout << sp.v.size() << std::endl;
	for (int i = 0; i < 10; ++i) {
		try {
			sp.addNumber(i + 1);
			std::cout << sp.v.size() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (EXIT_SUCCESS);
}
