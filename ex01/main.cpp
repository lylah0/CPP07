/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:30:46 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/09 16:55:09 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Iter.hpp"

int	main(){
	int			array[5] = {1, 2 ,3, 4, 5};
	char		array2[3] = {'a', 'b', 'c'};
	const int	array3[5] = {6, 7 ,8, 9, 0};
	const char	array4[3] = {'d', 'e', 'f'};

	std::cout << "===test 1: int array" << std::endl;
	iter(array, 5, print<int>);
	std::cout << "===test 2: char array" << std::endl;
	iter(array2, 3, print<char>);
	std::cout << "===test 3: const int array" << std::endl;
	iter(array3, 5, print<int>);
	std::cout << "===test 4: const char array" << std::endl;
	iter(array4, 3, print<char>);
}
