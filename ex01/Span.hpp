/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:13:36 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/30 12:24:32 by tiizuka          ###   ########.fr       */
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

    void          addNumber(const unsigned int);
    size_t        shortestSpan(void);
    size_t        longestSpan(void);
    void          insert(const std::vector<unsigned int>::iterator first, const std::vector<unsigned int>::iterator last);
    unsigned int  size() const;
    unsigned int  capacity() const;
    Span(unsigned int);
    ~Span(void);

  private:

    std::vector<unsigned int> _v;  
    Span(void);
};

#endif
