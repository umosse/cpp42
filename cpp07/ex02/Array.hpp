#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <exception>
#include <iostream>
#include <new>
#include <ostream>
#include <sstream>
#include <stdexcept>

template<class T>
class Array {
	public:
		Array(): _n(0), ptr(new T[0]){
		};
		Array(unsigned int n): _n(n), ptr(new T[n]){
			for (size_t i = 0; i < n; i++)
				ptr[i] = T();
		};
		Array(const Array &other){
			_n = other._n;
			ptr = new T[_n];
			for (size_t i = 0; i < _n; i++)
				ptr[i] = other.ptr[i];
		};
		~Array(){
			delete [] ptr;
			std::cout << "Destroyed\n";
		};
		Array&	operator=(const Array &other){
			if (this != &other)
			{
				_n = other._n;
				delete[] ptr;
				ptr = new T[_n];
				for (size_t i = 0; i < _n; i++)
					ptr[i] = other.ptr[i];
			}
			return (*this);
		};
		T&	operator[](size_t index){
			if (index >= _n)
			{
				std::ostringstream	oss;
				oss << "Out of bounds: trying to access: " << index << " while array size is: " << _n << "\n";
				throw std::out_of_range(oss.str());
			}
			return (ptr[index]);
		};
		inline size_t	size(){
			return (_n);
		}
	private:
		size_t	_n;
		T	*ptr;
};

#endif