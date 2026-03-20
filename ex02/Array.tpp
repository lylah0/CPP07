/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:23:10 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/20 15:08:50 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& src) : _size(src._size) {
	_array = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& rhs){
	if (this != &rhs){
		delete[] _array;
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(){
	std::cout << "destructor called" << std::endl;
	delete[] _array;
}

template <typename T>
int	Array<T>::size(){
	return (_size);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw std::exception();
	return (_array[index]);
}
