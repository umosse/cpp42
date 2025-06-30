#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <iostream>
#include <iterator>
#include <stack>
#include <vector>

template<typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T>{
	public:
		MutantStack() : std::stack<T>()
		{
			std::cout << "Default constructor called\n";
		}
		MutantStack(const MutantStack &other) : std::stack<T>(other)
		{
			std::cout << "Copy constructor called\n";
		}
		~MutantStack()
		{
			std::cout << "Default destructor called\n";
		}
		MutantStack& operator=(const MutantStack &other)
		{
			if (&other != this)
			{
				std::stack<T>::operator=(other);
			}
			return *this;
		}

		typedef typename container::iterator iterator;
		typedef typename container::const_iterator const_iterator;

		iterator begin ()
		{
			return this->c.begin();
		}

		iterator end ()
		{
			return this->c.end();
		}

		const_iterator begin () const
		{
			return this->c.begin();
		}

		const_iterator end () const
		{
			return this->c.end();
		}
};

#endif