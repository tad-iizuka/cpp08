/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:48:18 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/30 20:15:33 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		Log::a(F, L, C_G, "shortest:", Log::itoa(sp.shortestSpan()));
		Log::a(F, L, C_G, "longest:", Log::itoa(sp.longestSpan()));
	}
	{
		Span sp = Span(5);
		Log::a(F, L, C_G, "Size:", Log::itoa(sp.size()), "Capacity:", Log::itoa(sp.capacity()));
		for (int i = 0; i < 6; ++i) {
			try {
				sp.addNumber(i + 1);
				Log::a(F, L, C_G, "Size:", Log::itoa(sp.size()), "Capacity:", Log::itoa(sp.capacity()));
			}
			catch (const std::exception& e)
			{
				Log::a(F, L, C_R, "Error:", e.what());
			}
		}
	}
	{
		Span sp = Span(5);
		std::vector<unsigned int> array;
		array.push_back(1);
		array.push_back(2);
		array.push_back(3);
		try {
			sp.addNumber(array.begin(), array.end());
			Log::a(F, L, C_G, "Size:", Log::itoa(sp.size()), "Capacity:", Log::itoa(sp.capacity()));
			sp.addNumber(array.begin(), array.end());
		}
		catch (const std::exception& e)
		{
			Log::a(F, L, C_R, "Error:", e.what());
		}
	}
	{
		Span sp = Span(20000);
		std::vector<unsigned int> v;
		srand( (unsigned)time(NULL));
		for (int i = 0; i < 20000; ++i)
		{
			int r = rand() % 20000;
			v.push_back(r);
		}
		try {
			sp.addNumber(v.begin(), v.end());
			Log::a(F, L, C_G, "Size:", Log::itoa(sp.size()), "Capacity:", Log::itoa(sp.capacity()));
			Log::a(F, L, C_G, "shortest:", Log::itoa(sp.shortestSpan()));
			Log::a(F, L, C_G, "longest:", Log::itoa(sp.longestSpan()));
		}
		catch (const std::exception& e)
		{
			Log::a(F, L, C_R, "Error:", e.what());
		}
	}
	return (EXIT_SUCCESS);
}
