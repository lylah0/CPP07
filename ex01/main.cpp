/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:30:46 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/09 16:39:07 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Iter.hpp"
#include "Functions.hpp"

int	main(){
	int		array[5] = {1, 2 ,3, 4, 5};
	char	array2[3] = {'a', 'b', 'c'};

	std::cout << "===test 1: int array" << std::endl;
	iter(array, 5, print<int>);
	std::cout << "===test 2: char array" << std::endl;
	iter(array2, 3, print<char>);
}
