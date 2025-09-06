/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:57:03 by tiizuka           #+#    #+#             */
/*   Updated: 2025/09/06 15:28:35 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void subjectTest(void);
void debug(void);

int main(void)
{
	subjectTest();
	debug();
	return (EXIT_SUCCESS);
}

void subjectTest(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iter it = mstack.begin();
	MutantStack<int>::iter ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void debug(void)
{
	MutantStack<int> mstack;
	mstack.push(2);
	mstack.push(4);
	Log::a(F, L, C_G, "size:", Log::itoa(mstack.size()), "top:", Log::itoa(mstack.top()));
	mstack.pop();
	Log::a(F, L, C_G, "size:", Log::itoa(mstack.size()), "top:", Log::itoa(mstack.top()));
	mstack.push(4);
	mstack.push(6);
	mstack.push(8);
	mstack.push(10);
	Log::a(F, L, C_G, "size:", Log::itoa(mstack.size()), "top:", Log::itoa(mstack.top()));
	for (MutantStack<int>::iter it = mstack.begin(); it != mstack.end(); ++it)
	{
		Log::a(F, L, C_G, "index:",
					 Log::itoa(std::distance(mstack.begin(), it)),
					 "value:",
					 Log::itoa(*it));
	}
	for (MutantStack<int>::reverse_iter it = mstack.rbegin(); it != mstack.rend(); ++it)
	{
		Log::a(F, L, C_G, "index:",
					 Log::itoa(std::distance(mstack.rbegin(), it)),
					 "value:",
					 Log::itoa(*it));
	}
}
