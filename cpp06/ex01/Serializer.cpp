#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default constructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	newptr = reinterpret_cast<uintptr_t>(ptr);
	return (newptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}