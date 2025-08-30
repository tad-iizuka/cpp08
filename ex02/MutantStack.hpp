/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:52:56 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/30 20:30:20 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <stack>
#include <deque>
#include <cstdlib>
#include "Log.hpp"

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:

		MutantStack(void);
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack(void);

		typedef typename Container::iterator iter;
		typedef typename Container::const_iterator const_iter;
		typedef typename Container::reverse_iterator reverse_iter;
		typedef typename Container::const_reverse_iterator const_reverse_iter;

		iter begin(void);
		iter end(void);
		const_iter begin(void) const;
		const_iter end(void) const;

		reverse_iter rbegin(void);
		reverse_iter rend(void);
		const_reverse_iter rbegin(void) const;
		const_reverse_iter rend(void) const;

};

#include "MutantStack.tpp"

#endif
