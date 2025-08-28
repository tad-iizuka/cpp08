#include <iostream>
#include <cstdlib>
#include "Span.hpp"

int main(void)
{
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
			sp.insert(array.begin(), array.end());
			Log::a(F, L, C_G, "Size:", Log::itoa(sp.size()), "Capacity:", Log::itoa(sp.capacity()));
			sp.insert(array.begin(), array.end());
		}
		catch (const std::exception& e)
		{
			Log::a(F, L, C_R, "Error:", e.what());
		}
	}
	return (EXIT_SUCCESS);
}
