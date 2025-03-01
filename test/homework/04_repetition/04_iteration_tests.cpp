#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"
#include<iostream>

//TEST_CASE("Verify Test Configuration", "verification") {
//	REQUIRE(true == true);
//}
//test case for the factorial function
TEST_CASE("Verify Test factorial function", "verification") 
{
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(6) == 720);
}
TEST_CASE("Verify Test gcd function", "verification") 
{
	REQUIRE(gcd(3,15));
	REQUIRE(gcd(21,28));
	REQUIRE(gcd(25,100));
}