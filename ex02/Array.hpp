/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:04:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/11 15:39:31 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
# include <iostream>

template <typename T>
class Array {
	private :
		T*				_array;
		unsigned int	_size;
	public :
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		Array&	operator=(const Array& rhs);
		T&	operator[](unsigned int index);
		~Array();

		int	size();
};

#include "Array.tpp"

#endif
