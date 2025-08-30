/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:52:56 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/30 13:45:57 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <stack>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include "Log.hpp"

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:

		MutantStack(void) : std::stack<T, Container>() {};
		MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
		MutantStack& operator=(const MutantStack& other) {
				std::stack<T, Container>::operator=(other);
				return *this;
		}
		~MutantStack(void) {}

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }

		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }
		const_reverse_iterator rbegin() const { return this->c.rbegin(); }
		const_reverse_iterator rend() const { return this->c.rend(); }

};

#include "MutantStack.tpp"

#endif
