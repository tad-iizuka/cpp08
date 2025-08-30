#include <iostream>
#include <cstdlib>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	std::deque<int> d;
	d.push_back(-1);
	d.push_back(0);
	d.push_back(1);

	std::list<int> l;
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);

	std::set<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);

	try {
				std::vector<int>::iterator itv = easyfind(v, 20);
				std::cout << "vector: " << *itv << std::endl;
				std::deque<int>::iterator itd = easyfind(d, 0);
				std::cout << "deque:  " << *itd << std::endl;
				std::list<int>::iterator itl = easyfind(l, 3);
				std::cout << "list:   " << *itl << std::endl;
				std::set<int>::iterator its = easyfind(s, 200);
				std::cout << "set:    " << *its << std::endl;
				itv = easyfind(v, 6);
				std::cout << "vector: " << *itv << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << C_R << e.what() << C_CLR << '\n';
	}
	return (EXIT_SUCCESS);
}
