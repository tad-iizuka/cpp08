/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:13:36 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/28 22:00:28 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Log.hpp"

class Span
{
  public:

    void          addNumber(const unsigned int);
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
