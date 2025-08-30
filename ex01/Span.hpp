/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:13:36 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/30 20:26:39 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include "Log.hpp"

class Span
{
	public:

		void					addNumber(const unsigned int n);
		void					addNumber(const std::vector<unsigned int>::iterator begin,
										const std::vector<unsigned int>::iterator end);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		unsigned int	size(void) const;
		unsigned int	capacity(void) const;
		Span(unsigned int n);
		~Span(void);

	private:

		std::vector<unsigned int> _v;  
		Span(void);
};

#endif
