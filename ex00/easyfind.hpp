/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:59:29 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/27 03:47:51 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <algorithm>
#include "Log.hpp"

template<typename T>
typename T::iterator easyfind(T&, int);

#include "easyfind.tpp"

#endif
