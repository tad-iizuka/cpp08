/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:59:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/26 21:02:55 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(const std::vector<T>& v, const int key) {
	for (size_t i = 0; i < v.size(); ++i) {
		if (v[i] == key) {
			return i;
		}
	}
	throw std::invalid_argument("key: " + Log::itoa(key) + " not found.");
	return -1;
}

template<typename T>
int easyfind(const std::deque<T>& v, const int key) {
	for (size_t i = 0; i < v.size(); ++i) {
		if (v[i] == key) {
			return i;
		}
	}
	throw std::invalid_argument("key: " + Log::itoa(key) + " not found.");
	return -1;
}
