/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:15:37 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/28 21:53:00 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void  Span::addNumber(const unsigned int value) {
  if (size() >= capacity()) {
      throw std::overflow_error("capacity exceeded");
  }
  _v.push_back(value);
}

void Span::insert(const std::vector<unsigned int>::iterator first, const std::vector<unsigned int>::iterator last) {
    size_t dist = std::distance(first, last);
    if (size() + dist > capacity()) {
        throw std::overflow_error("capacity exceeded in insert");
    }
    _v.insert(_v.end(), first, last);
}

unsigned int  Span::size() const {
  return  _v.size();
}

unsigned int  Span::capacity() const {
  return  _v.capacity();
}

Span::Span(const unsigned int N) {
  _v.reserve(N);
}

Span::~Span(void) {}
