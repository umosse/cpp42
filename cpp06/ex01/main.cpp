#include "Serializer.hpp"

int	main()
{
	Data	data;
	data.stuff = "hello";
	std::cout << &data << "\n";
	std::cout << data.stuff << "\n";
	uintptr_t serializedData = Serializer::serialize(&data);
	Data *newData = Serializer::deserialize(serializedData);
	std::cout << "new ptr: " << newData << "\n";
	std::cout << newData->stuff << "\n";

	return (0);
}