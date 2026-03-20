/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:05:16 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/20 15:39:27 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Array.hpp"

int main() {
	// test 1
	std::cout << "===test 1 : empty array" << std::endl;
	Array<int> empty;
	std::cout << "size: " << empty.size() << std::endl;

	// test 2
	std::cout << "===test 2 : n constructor" << std::endl;
	Array<int> numbers(5);
	for (int i = 0; i < 5; i++)
		numbers[i] = i * 10;
	for (int i = 0; i < 5; i++)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	std::cout << "size: " << numbers.size() << std::endl;

	// test 3
	std::cout << "===test 3 : copy constructeur" << std::endl;
	Array<int> copy(numbers);
	copy[0] = 999;
	std::cout << "copy[0] = " << copy[0] << std::endl;
	std::cout << "numbers[0] = " << numbers[0] << std::endl;

	// test 4
	std::cout << "===test 4 : operator=" << std::endl;
	Array<int> assigned;
	assigned = numbers;
	assigned[1] = 888;
	std::cout << "assigned[1] = " << assigned[1] << std::endl;
	std::cout << "numbers[1] = " << numbers[1] << std::endl;

	// test 5
	std::cout << "===test 5 : out of bounds <" << std::endl;
	try {
		numbers[-1] = 0;
	}
	catch (const std::exception& e) {
		std::cerr << "exception: " << e.what() << std::endl;
	}

	// test 6
	std::cout << "===test 6 : out of bounds >" << std::endl;
	try {
		numbers[5] = 0;
	}
	catch (const std::exception& e) {
		std::cerr << "exception: " << e.what() << std::endl;
	}

	// test 7
	std::cout << "===test 7 : array of string" << std::endl;
	Array<std::string> words(3);
	words[0] = "bonjour";
	words[1] = "hello";
	words[2] = "hola";
	for (int i = 0; i < 3; i++)
		std::cout << "words[" << i << "] = " << words[i] << std::endl;
	return (0);
}
