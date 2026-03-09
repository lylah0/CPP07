/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:30:39 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/03 12:24:31 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

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
