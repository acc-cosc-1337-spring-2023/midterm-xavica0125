#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify value_ref_param")
{
	int num = 5;
	int num1 = 10;
	value_ref_param(num,num1);
	REQUIRE(num == 10);
	REQUIRE(num1 == 10);
}