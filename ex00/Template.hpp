/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:30:39 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/03 12:25:43 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b){
	T	c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T	min(T a, T b){
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T a, T b){
	if (a > b)
		return (a);
	return (b);
}

#endif
