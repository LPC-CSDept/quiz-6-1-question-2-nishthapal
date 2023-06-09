// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "q2.hpp"

// tests for exercise 1
TEST_CASE("Test1 ", "[Swap two values]")
{
	int n1, n2, n3;
	int ret;
	n1 = 10;
	n2 = 20;
	n3 = 30;
	ret = findMin(n1, n2, n3);
	printresult(n1, n2, n3, ret);
	REQUIRE(ret == 10);
}
TEST_CASE("Test2 ", "[Swap two values]")
{
	int n1, n2, n3;
	int ret;
	n1 = 0;
	n2 = -10;
	n3 = 5;
	ret = findMin(n1, n2, n3);
	printresult(n1, n2, n3, ret);
	REQUIRE(ret == -10);
}