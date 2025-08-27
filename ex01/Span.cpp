/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:15:37 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/27 16:20:33 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void  Span::addNumber(const unsigned int value) {
  if (v.size() >= v.capacity()) {
      throw std::overflow_error("FixedVector capacity exceeded");
  }
  v.push_back(value);
}

Span::Span(const unsigned int N) {
  v.reserve(N);
}

Span::~Span(void) {}
