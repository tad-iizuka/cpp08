/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:13:36 by tiizuka           #+#    #+#             */
/*   Updated: 2025/08/27 16:19:28 by tiizuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include "Log.hpp"

class Span
{
  public:

    std::vector<unsigned int> v;

    void  addNumber(const unsigned int);
    Span(unsigned int);
    ~Span(void);

  private:

    Span(void);
};

#endif
