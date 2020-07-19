#ifndef __TOPPINGS_TESTS_HPP__
#define __TOPPINGS_TESTS_HPP__

#include "gtest/gtest.h"
#include <string>
#include <vector>

#include "../pizza.hpp"
#include "toppings_decorator.hpp"

//***************************
// Decorator Tests
//***************************

TEST(ToppingsTest, DecorateTest1) {
	Pizza* topp = new Pizza();
	Anchovy* anch = new Anchovy(topp);

	EXPECT_EQ(anch->get_topping, ", Anchovies");
	EXPECT_EQ(anch->get_cost(), 4.10);

	Bellpepper* bell = new Bellpepper(topp);

        EXPECT_EQ(bell->get_topping, ", Yellow Bell Peppers");
        EXPECT_EQ(bell->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest2) {
        Pizza* topp = new Pizza();
        Chicken* chicken = new Chicken(topp);

        EXPECT_EQ(chicken->get_topping, ", Chicken");
        EXPECT_EQ(chicken->get_cost(), 2.35);

        Meatball* mb = new Meatball(topp);
	Mushroom* mush = new Mushroom(mb);
        EXPECT_EQ(mush->get_topping, ", Meatballs, Mushrooms");
        EXPECT_EQ(mush->get_cost(), 3.90);
}

TEST(ToppingsTest, DecorateTest3) {
        Pizza* topp = new Pizza();
        Pepperoni* pepp = new Pepperoni(topp);
	Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(spinach->get_topping, ", Pepperonis, Spinach");
        EXPECT_EQ(spinach->get_cost(), 3.90);

        Olive* olive = new Olive(pepp);
	Onion* onion = new Onion(olive);

        EXPECT_EQ(onion->get_topping, ", Pepperonis, Olives, Onions");
        EXPECT_EQ(onion->get_cost(), 5.45);
}

TEST(ToppingsTest, DecorateTest4) {
        Pizza* topp = new Pizza();
        Pepperoni* pepp = new Pepperoni(topp);
	Salami* sal = new Salami(pepp);
	Tomato* tom = new Tomato(sal);
	Tuna* tuna = new Tuna(tom);
	Olive* olive = new Olive(tuna);

        EXPECT_EQ(olive->get_topping, ", Pepperonis, Salami, Dried Tomatoes, Tuna, Olives");
        EXPECT_EQ(olive->get_cost(), 11.90);
}

//***************************
// Input Tests
//***************************

TEST(ToppingsTest, ValidInputTest) {
	std::vector<std::string> message = {"M", "e", "a", "t", "b", "a", "l", "l"};
	std::vector<char*> argv;
	for (const auto& arg : message)
		argv.push_back((char*)arg.data());
	argv.push_back(nullptr);

	Pizza *topping = add_top(argv.data(), argv.size());
	
	EXPECT_EQ(topping->get_topping(), "Meatball");
	
}

TEST(ToppingsTest, InvalidInputTest) {
	//Validation #1
        std::vector<std::string> message1 = {"8"};
        std::vector<char*> argv1;
        for (const auto& arg1 : message1)
                argv1.push_back((char*)arg1.data());
        argv1.push_back(nullptr);

        Pizza *topping = add_top(argv1.data(), argv1.size());

        EXPECT_EQ(topping, nullptr);

	//Validation #2
	std::vector<std::string> message2 = {"R", "5", "wrong"};
        std::vector<char*> argv2;
        for (const auto& arg2 : message2)
                argv2.push_back((char*)arg2.data());
        argv2.push_back(nullptr);

        topping = add_top(argv2.data(), argv2.size());

        EXPECT_EQ(topping, nullptr);

	//Validation #3
	std::vector<std::string> message3 = {"M", "E", "A", "T", "B", "A", "L", "L"};
        std::vector<char*> argv3;
        for (const auto& arg3 : message3)
                argv3.push_back((char*)arg3.data());
        argv3.push_back(nullptr);

        topping = add_top(argv3.data(), argv3.size());

        EXPECT_EQ(topping, nullptr);	

	//Validation #4
	std::vector<std::string> message4 = {"M", "e", "a", "t", "b", "#", "l", "l"};
        std::vector<char*> argv4;
        for (const auto& arg4 : message4)
                argv4.push_back((char*)arg4.data());
        argv4.push_back(nullptr);

        topping = add_top(argv4.data(), argv4.size());

        EXPECT_EQ(topping, nullptr);

} 	

#endif // __TOPPINGS_TESTS_HPP
