#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_primes function")
{
	vector<int> num{2,3,5,7};
	vector<int> num1{2,3,5,7,11,13};
	vector<int> num2{2,3,5,7,11,13,17,19,23,29};
	vector<int> num3{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	REQUIRE(get_primes(10) == num );
	REQUIRE(get_primes(15) == num1);
	REQUIRE(get_primes(30) == num2);
	REQUIRE(get_primes(50) == num3);
}