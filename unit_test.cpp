#include "gtest/gtest.h"

//#include "toppings/toppings_tests.hpp"
#include "Factory_unit_test.hpp"
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
