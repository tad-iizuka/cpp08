/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:59:38 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/26 12:54:37 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(const T& content, const int key) {
	const std::list<int>T::iterator it = std::find(content.begin(), content.end(), key);
	if (it != content.end()) {
			std::cout << "Value " << key << " found at index: " << std::distance(const content.begin(), it) << std::endl;
	} else {
			std::cout << "Value " << key << " not found." << std::endl;
	}
	return 0;
}
