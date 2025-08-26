/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:59:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/27 03:28:31 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(T& container, int key) {
	typename T::iterator it = std::find(container.begin(), container.end(), key);
	if (it == container.end())
		throw std::invalid_argument(F + (":" + Log::itoa(L)) + " key = " + Log::itoa(key) + " not found.");
	return static_cast<int>(it - container.begin());
}
