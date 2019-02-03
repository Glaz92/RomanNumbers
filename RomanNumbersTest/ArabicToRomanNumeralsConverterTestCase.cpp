#include "pch.h"
#include "../RomanNumbers/NumbersConverter.cpp"

int main(int argc, char ** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return	RUN_ALL_TESTS();
}

TEST(ArabicToRomanNumeralsConverterTestCase, GTestTest) {
	GTEST_SUCCEED();
}

TEST(ArabicToRomanNumeralsConverterTestCase, 1_isConvertetTo_I)
{
	NumbersConverter converter;
	ASSERT_EQ("I",converter.arabicNumberToRomanNumeral(1));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 2_isConvertetTo_II)
{
	NumbersConverter converter;
	ASSERT_EQ("II", converter.arabicNumberToRomanNumeral(2));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 3_isConvertetTo_III)
{
	NumbersConverter converter;
	ASSERT_EQ("III", converter.arabicNumberToRomanNumeral(3));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 4_isConvertetTo_IV)
{
	NumbersConverter converter;
	ASSERT_EQ("IV", converter.arabicNumberToRomanNumeral(4));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 5_isConvertetTo_V)
{
	NumbersConverter converter;
	ASSERT_EQ("V", converter.arabicNumberToRomanNumeral(5));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 7_isConvertetTo_VII)
{
	NumbersConverter converter;
	ASSERT_EQ("VII", converter.arabicNumberToRomanNumeral(7));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 9_isConvertetTo_IX)
{
	NumbersConverter converter;
	ASSERT_EQ("IX", converter.arabicNumberToRomanNumeral(9));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 11_isConvertetTo_XI)
{
	NumbersConverter converter;
	ASSERT_EQ("XI", converter.arabicNumberToRomanNumeral(11));
}