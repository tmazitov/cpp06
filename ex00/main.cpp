#include "ScalarConverter.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
	{
		std::cout << "parsing error: invalid amount of arguments" << std::endl;	
		return (1);
	}
	std::string str = av[1];
	if (str.empty())
	{
		std::cout << "parsing error: value argument cannot be empty" << std::endl;	
		return (1);
	}
	ScalarConverter::convert(str);
}