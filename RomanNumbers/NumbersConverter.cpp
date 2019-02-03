#include "NumbersConverter.h"

NumbersConverter::NumbersConverter()
{
	numbers[0] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	numbers[1] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	numbers[2] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	numbers[3] = { "", "M", "MM", "MMM" };

}


NumbersConverter::~NumbersConverter()
{
}

std::string NumbersConverter::arabicNumberToRomanNumeral(int number)
{
	if (number > 3999 || number < 1)
		return "Wrong value - must in range 1 to 3999";

	std::string result;

	for(int i = 0; number > 0; i++, number /= 10)
	{
		result = numbers[i][number % 10] + result;
	}

	return result;
}