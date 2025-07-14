#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	RPN	rpn;
	if (rpn.inputParsing(argv[1]) != 0)
		return 1;
	std::cout << rpn.calculate(argv[1]) << "\n";
}