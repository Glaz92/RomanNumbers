#pragma once
#include <string>
#include <vector>

class NumbersConverter
{
public:
	NumbersConverter();
	~NumbersConverter();

public:
	std::string arabicNumberToRomanNumeral(int number);

private:
	std::vector<std::string> numbers[4];
};

