#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

//verify that calling the get_sales_tax_amount function with parameter
// 10  returns the value .675.
TEST_CASE("Test Get Sales Tax")
{
	REQUIRE(get_sales_tax_amount(10) == .675);
//Create an assertion to verify that calling the get_sales_tax_amount
// function with parameter 20 returns the value 1.35
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}
TEST_CASE("Test Get Tip Amount")
{
	//Create an assertion to verify that calling the get_tip_amount
	// function with parameters 20 and  15%  returns the value 3.
	REQUIRE(get_tip_amount(20,.15) == 3);
	//Create an assertion to verify that calling the get_tip_amount
	// function with parameters 20 and  20%  returns the value 4.
	REQUIRE(get_tip_amount(20,.20) == 4);

}
