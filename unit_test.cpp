#include "gtest/gtest.h"

#include "Factory_unit_test.hpp"
#include "toppings/toppings_tests.hpp"
//#include "combined_unit_tests.hpp"
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
