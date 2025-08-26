#include <iostream>
#include <cstdlib>
#include "easyfind.hpp"

int main(void)
{
    std::list<int>content;
    content.push_back(10);
    content.push_back(20);
    content.push_back(30);
    content.push_back(40);
    content.push_back(50);
    int valueToFind = 30;
    easyfind(content, valueToFind);
    return (EXIT_SUCCESS);
}
