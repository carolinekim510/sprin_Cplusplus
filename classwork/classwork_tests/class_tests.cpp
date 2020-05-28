#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "assign02.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


//Write the test case for the function gross_pay with values:
//hours 10 hourly_rate 15 result should be 150
//hours  5 hourly_rate 20 result should be 100
//hours 20 hourly_rate 10 result should be 200 

TEST_CASE("name assign 1 function", "[150,100,200]") {
	//sample to guide you ---> REQUIRE(gross_pay(5, 5) == 25);
	REQUIRE(gross_pay(10, 15) == 150);
	REQUIRE(gross_pay(5,20) == 100);
	REQUIRE(gross_pay(20, 10) == 200);
}

