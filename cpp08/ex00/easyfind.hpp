#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), i);
	return iter;
}

#endif