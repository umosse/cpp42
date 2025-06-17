#include "easyfind.hpp"
#include <cstddef>
#include <list>
#include <vector>

int	main(void)
{
	// Testing with vectors
	std::vector<int>intVector;

	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);
	intVector.push_back(4);
	intVector.push_back(5);
	intVector.push_back(6);
	intVector.push_back(7);
	intVector.push_back(8);
	intVector.push_back(9);
	intVector.push_back(10);
	std::cout << "intVector filled \n";

	//Modify toFind for multiple tests.
	std::size_t	toFind = 5;

	std::vector<int>::iterator iter = ::easyfind(intVector, toFind);
	if (iter == intVector.end())
		std::cout << "Error\n";
	else
		std::cout << "Success\n";

	// Testing with lists
	std::list<int>intList;
	intList.push_back(1);
	intList.push_back(2);
	intList.push_back(3);
	intList.push_back(4);
	intList.push_back(5);
	intList.push_back(6);
	intList.push_back(7);
	intList.push_back(8);
	intList.push_back(9);
	intList.push_back(10);

	//Modify toFindList for multiple tests.
	std::size_t	toFindList = 8;

	std::list<int>::iterator listIter = ::easyfind(intList, toFindList);
	if (listIter == intList.end())
		std::cout << "Error\n";
	else
		std::cout << "Success\n";
}