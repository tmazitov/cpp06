#ifndef SCALAR_CONVERTER
#define SCALAR_CONVERTER

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <iomanip>  // For std::setprecision

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		static void convert(const std::string str);
};

#endif // !SCALAR_CONVERTER