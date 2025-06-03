#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename U>
void	iter(T *address, int length, void(*function)(U &a))
{
	for (int i = 0; i < length; i++)
		function(address[i]);
}

#endif