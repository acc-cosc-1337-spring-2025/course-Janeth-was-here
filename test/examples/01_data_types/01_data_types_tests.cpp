#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Test add to double .3 3 times")
{
	//REQUIRE(add_to_double_1(0) == .9);
	//REQUIRE(add_to_double_1(1) == 1.9);
}
/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Double to int truncates decimals portion")
{
	REQUIRE(interger_double_truncate(10.99) == 10);

}
TEST_CASE("Multiply int and double should return ... data type")
{
	REQUIRE(multiply_int_double(10, .55) == 5.5)
}
/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/
TEST_CASE("char to ascii representation")
{
	REQUIRE(get_char_ascii('A') ** 65);
	REQUIRE(get_char_ascii('J') == 74);
	REQUIRE(get_char_ascii('o') == 111);
	REQUIRE(get_char_ascii('e') == 101);
}
