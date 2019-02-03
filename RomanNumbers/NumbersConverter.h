#pragma once
#include <string>

class NumbersConverter
{
public:
	NumbersConverter();
	~NumbersConverter();

public:
	std::string arabicNumberToRomanNumeral(int number);
};

