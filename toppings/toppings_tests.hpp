#ifndef __TOPPINGS_TESTS_HPP__
#define __TOPPINGS_TESTS_HPP__

#include "gtest/gtest.h"
#include <iostream>
#include <string>

#include "../pizza_decorator.hpp"
#include "../toppings_list.hpp"
#include "toppings_decorator.hpp"
#include "toppings.hpp"

//***************************
// Decorator Tests
//***************************

TEST(ToppingsTest, DecorateTest1) {
	Pizza_Decorator* topp = new ToppingsDecorator();
	Anchovy* anch = new Anchovy(topp);

	EXPECT_EQ(anch->get_topping(), "Anchovy ");
	EXPECT_EQ(anch->get_cost(), 4.10);
}

TEST(ToppingsTest, DecorateTest2) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Anchovy* anch = new Anchovy(topp);

        EXPECT_EQ(anch->get_topping(), "Anchovy ");
        EXPECT_EQ(anch->get_cost(), 4.10);

        BellPepper* bell = new BellPepper(topp);

        EXPECT_EQ(bell->get_topping(), "YellowBellPepper ");
        EXPECT_EQ(bell->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest3) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Chicken* chicken = new Chicken(topp);

        EXPECT_EQ(chicken->get_topping(), "Chicken ");
        EXPECT_EQ(chicken->get_cost(), 2.35);

        BellPepper* bell = new BellPepper(topp);

        EXPECT_EQ(bell->get_topping(), "YellowBellPepper ");
        EXPECT_EQ(bell->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest4) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Chicken* chicken = new Chicken(topp);

        EXPECT_EQ(chicken->get_topping(), "Chicken ");
        EXPECT_EQ(chicken->get_cost(), 2.35);

        Meatball* mb = new Meatball(topp);
	Mushroom* mush = new Mushroom(mb);
        EXPECT_EQ(mush->get_topping(), "Mushroom ");
        EXPECT_EQ(mush->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest5) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Chicken* chicken = new Chicken(topp);

        EXPECT_EQ(chicken->get_topping(), "Chicken ");
        EXPECT_EQ(chicken->get_cost(), 2.35);

        Meatball* mb = new Meatball(topp);
        Mushroom* mush = new Mushroom(mb);
        EXPECT_EQ(mb->get_topping(), "Meatball ");
        EXPECT_EQ(mb->get_cost(), 2.35);
}

TEST(ToppingsTest, DecorateTest6) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
	Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(spinach->get_topping(), "Spinach ");
        EXPECT_EQ(spinach->get_cost(), 1.55);

        Olive* olive = new Olive(pepp);
	Onion* onion = new Onion(onion);

        EXPECT_EQ(onion->get_topping(),  "Onion ");
        EXPECT_EQ(onion->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest7) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(spinach->get_topping(), "Spinach ");
        EXPECT_EQ(spinach->get_cost(), 1.55);

        Olive* olive = new Olive(pepp);
        Onion* onion = new Onion(onion);

        EXPECT_EQ(olive->get_topping(), "Olive ");
        EXPECT_EQ(olive->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest8) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(pepp->get_topping(), "Pepperoni ");
        EXPECT_EQ(pepp->get_cost(), 2.35);

        Olive* olive = new Olive(pepp);
        Onion* onion = new Onion(onion);

        EXPECT_EQ(onion->get_topping(), "Onion ");
        EXPECT_EQ(onion->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest9) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(pepp->get_topping(), "Pepperoni ");
        EXPECT_EQ(pepp->get_cost(), 2.35);

        Olive* olive = new Olive(pepp);
        Onion* onion = new Onion(onion);

        EXPECT_EQ(olive->get_topping(), "Olive ");
        EXPECT_EQ(olive->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest10) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
	Salami* sal = new Salami(pepp);
	Tomato* tom = new Tomato(sal);
	Tuna* tuna = new Tuna(tom);
	Olive* olive = new Olive(tuna);

        EXPECT_EQ(olive->get_topping(), "Olive ");
        EXPECT_EQ(olive->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest11) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Salami* sal = new Salami(pepp);
        Tomato* tom = new Tomato(sal);
        Tuna* tuna = new Tuna(tom);
        Olive* olive = new Olive(tuna);

        EXPECT_EQ(tuna->get_topping(), "Tuna ");
        EXPECT_EQ(tuna->get_cost(), 4.10);
}

TEST(ToppingsTest, DecorateTest12) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Salami* sal = new Salami(pepp);
        Tomato* tom = new Tomato(sal);
        Tuna* tuna = new Tuna(tom);
        Olive* olive = new Olive(tuna);

        EXPECT_EQ(tom->get_topping(), "DriedTomato ");
        EXPECT_EQ(tom->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest13) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Salami* sal = new Salami(pepp);
        Tomato* tom = new Tomato(sal);
        Tuna* tuna = new Tuna(tom);
        Olive* olive = new Olive(tuna);

        EXPECT_EQ(sal->get_topping(), "Salami ");
        EXPECT_EQ(sal->get_cost(), 2.35);
}

TEST(ToppingsTest, DecorateTest14) {
        Pizza_Decorator* topp = new ToppingsDecorator();
        Pepperoni* pepp = new Pepperoni(topp);
        Salami* sal = new Salami(pepp);
        Tomato* tom = new Tomato(sal);
        Tuna* tuna = new Tuna(tom);
        Olive* olive = new Olive(tuna);

        EXPECT_EQ(pepp->get_topping(), "Pepperoni ");
        EXPECT_EQ(pepp->get_cost(), 2.35);
}

//***************************
// Topping Cost Tests
//***************************

/*TEST(ToppingsTest, ListTest) {
	Toppings_List* pizza;

	pizza->topping_details();
}*/
	
#endif // __TOPPINGS_TESTS_HPP
