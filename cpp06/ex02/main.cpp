#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <climits>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <typeinfo>

Base	*generate(void)
{
	int	randomNum = std::rand();
	if (randomNum % 3 == 0)
	{
		std::cout << "Generated A\n";
		return new A();
	}
	if (randomNum % 3 == 1)
	{
		std::cout << "Generated B\n";
		return new B();
	}
	std::cout << "Generated C\n";
	return new C();
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "This is A\n";
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "This is B\n";
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "This is C\n";
		return ;
	}
}

void	identify(Base &p)
{
	try
	{
		A	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "This is A again\n";
		return ;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << "\n";
	}
	try
	{
		B	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "This is B again\n";
		return ;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << "\n";
	}
	try
	{
		C	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "This is C again\n";
		return ;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << "\n";
	}
}

int	main()
{
	std::srand(time(0));

	Base	*obj = generate();
	identify(obj);
	identify(*obj);
	delete obj;
	return (0);
}
