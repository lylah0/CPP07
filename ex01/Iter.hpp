/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:30:45 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/09 16:54:58 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	print(T c){
	std::cout << c << std::endl;
}

template <typename T, typename F>
void	iter(T* array, const int len, F func){
	for(int i = 0; i < len; i++){
		func(array[i]);
	}
}

template <typename T, typename F>
void	iter(const T* array, const int len, F func){
	for(int i = 0; i < len; i++){
		func(array[i]);
	}
}

#endif
