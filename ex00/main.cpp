#include <iostream>
#include <cstdlib>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	try {
		Log::a(F, L, C_G, "easyfind(v, 10)", "=", Log::itoa(easyfind(v, 10)));
		Log::a(F, L, C_G, "easyfind(v, 20)", "=", Log::itoa(easyfind(v, 20)));
		Log::a(F, L, C_G, "easyfind(v, 30)", "=", Log::itoa(easyfind(v, 30)));
		Log::a(F, L, C_G, "easyfind(v, 40)", "=", Log::itoa(easyfind(v, 40)));
		Log::a(F, L, C_G, "easyfind(v, 50)", "=", Log::itoa(easyfind(v, 50)));
	}
	catch(const std::exception& e)
	{
		std::cerr << C_R << e.what() << C_CLR << '\n';
	}
	std::deque<int> d;
	d.push_back(-2);
	d.push_back(-1);
	d.push_back(0);
	d.push_back(1);
	try {
		Log::a(F, L, C_G, "easyfind(d, -2)", "=", Log::itoa(easyfind(d, -2)));
		Log::a(F, L, C_G, "easyfind(d, -1)", "=", Log::itoa(easyfind(d, -1)));
		Log::a(F, L, C_G, "easyfind(d,  0)", "=", Log::itoa(easyfind(d,  0)));
		Log::a(F, L, C_G, "easyfind(d,  1)", "=", Log::itoa(easyfind(d,  1)));
		Log::a(F, L, C_G, "easyfind(d,  2)", "=", Log::itoa(easyfind(d,  2)));
	}
	catch(const std::exception& e)
	{
		std::cerr << C_R << e.what() << C_CLR << '\n';
	}
	return (EXIT_SUCCESS);
}
