/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:15:37 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/30 20:17:04 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void  Span::addNumber(const unsigned int n) {
  if (size() >= capacity()) {
      throw std::overflow_error("capacity exceeded");
  }
  _v.push_back(n);
}

void Span::addNumber(const std::vector<unsigned int>::iterator begin, const std::vector<unsigned int>::iterator end) {
    size_t dist = std::distance(begin, end);
    if (size() + dist > capacity()) {
        throw std::overflow_error("capacity exceeded in range");
    }
    _v.insert(_v.end(), begin, end);
}

size_t  Span::shortestSpan(void) {
  unsigned int span = -1;
  for (std::vector<unsigned int>::iterator it = _v.begin(); it != _v.end() - 1; ++it) {
      if (span >= std::abs(static_cast<long>(*it) - static_cast<long>(*(it + 1))))
        span = std::abs(static_cast<long>(*it) - static_cast<long>(*(it + 1)));
  }
  return span;
}

size_t  Span::longestSpan(void) {
  unsigned int span = 0;
  for (std::vector<unsigned int>::iterator it = _v.begin(); it != _v.end() - 1; ++it) {
      if (span < std::abs(static_cast<long>(*it) - static_cast<long>(*(it + 1))))
        span = std::abs(static_cast<long>(*it) - static_cast<long>(*(it + 1)));
  }
  return span;
}

unsigned int  Span::size(void) const {
  return  _v.size();
}

unsigned int  Span::capacity(void) const {
  return  _v.capacity();
}

Span::Span(const unsigned int n) {
  _v.reserve(n);
}

Span::~Span(void) {}
