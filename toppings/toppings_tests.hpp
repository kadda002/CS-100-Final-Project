#ifndef __TOPPINGS_TESTS_HPP__
#define __TOPPINGS_TESTS_HPP__

#include "gtest/gtest.h"
#include <iostream>
#include <string>

#include "../pizza.hpp"
#include "toppings_decorator.hpp"
#include "toppings.hpp"

//***************************
// Decorator Tests
//***************************

TEST(ToppingsTest, DecorateTest0) {
        Pizza_Factory* Italian = new Italian_Style_Pizza;
        Base_Pizza* pizza = Italian->get_pizza();

        EXPECT_EQ(pizza->get_topping(), "no topping");
        EXPECT_EQ(pizza->get_cost(), 0);
}

TEST(ToppingsTest, DecorateTest1) {
	Pizza_Factory* Italian = new Italian_Style_Pizza;
        Base_Pizza* pizza = Italian->get_pizza();

        Anchovy* anch = new Anchovy(pizza);

	EXPECT_EQ(anch->get_topping(), "Anchovy");
	EXPECT_EQ(anch->get_cost(), 4.10);
}

TEST(ToppingsTest, DecorateTest2) {
        Pizza_Factory* Italian = new Italian_Style_Pizza;
        Base_Pizza* pizza = Italian->get_pizza();

        Anchovy* anch = new Anchovy(pizza);

        EXPECT_EQ(anch->get_topping(), "Anchovy");
        EXPECT_EQ(anch->get_cost(), 4.10);

        BellPepper* bell = new BellPepper(anch);

        EXPECT_EQ(bell->get_topping(), "Yellow Bell Pepper");
        EXPECT_EQ(bell->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest3) {
        Pizza_Factory* Italian = new Italian_Style_Pizza;
        Base_Pizza* pizza = Italian->get_pizza();

        Chicken* chicken = new Chicken(pizza);

        EXPECT_EQ(chicken->get_topping(), "Chicken");
        EXPECT_EQ(chicken->get_cost(), 2.35);

        BellPepper* bell = new BellPepper(chicken);

        EXPECT_EQ(bell->get_topping(), "Yellow Bell Pepper");
        EXPECT_EQ(bell->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest4) {
        Pizza_Factory* Chicago  = new Chicago_Style_Pizza;
        Base_Pizza* pizza = Chicago->get_pizza();

	Chicken* chicken1 = new Chicken(pizza);

        EXPECT_EQ(chicken1->get_topping(), "Chicken");
        EXPECT_EQ(chicken1->get_cost(), 2.35);

	Chicken* chicken2 = new Chicken(chicken1);

        EXPECT_EQ(chicken2->get_topping(), "Chicken");
        EXPECT_EQ(chicken2->get_cost(), 2.35);

        Meatball* mb = new Meatball(chicken2);
	Mushroom* mush = new Mushroom(mb);
        EXPECT_EQ(mush->get_topping(), "Mushroom");
        EXPECT_EQ(mush->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest5) {
        Pizza_Factory* NY = new NY_Style_Pizza;
	Base_Pizza* pizza = NY->get_pizza();	

	Chicken* chicken = new Chicken(pizza);

        EXPECT_EQ(chicken->get_topping(), "Chicken");
        EXPECT_EQ(chicken->get_cost(), 2.35);

        Meatball* mb = new Meatball(chicken);
        Mushroom* mush = new Mushroom(mb);

        EXPECT_EQ(mb->get_topping(), "Meatball");
        EXPECT_EQ(mb->get_cost(), 2.35);
}


TEST(ToppingsTest, DecorateTest6) {
        Pizza_Factory* Chicago = new Chicago_Style_Pizza;
        Base_Pizza* pizza = Chicago->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
	Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(spinach->get_topping(), "Spinach");
        EXPECT_EQ(spinach->get_cost(), 1.55);

        Olive* olive = new Olive(pepp);
	Onion* onion = new Onion(olive);

        EXPECT_EQ(onion->get_topping(),  "Onion");
        EXPECT_EQ(onion->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest7) {
        Pizza_Factory* NY = new NY_Style_Pizza;
        Base_Pizza* pizza = NY->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
        Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(spinach->get_topping(), "Spinach");
        EXPECT_EQ(spinach->get_cost(), 1.55);

        Olive* olive = new Olive(pepp);
        Onion* onion = new Onion(olive);

        EXPECT_EQ(olive->get_topping(), "Olive");
        EXPECT_EQ(olive->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest8) {
        Pizza_Factory* Italian = new Italian_Style_Pizza;
	Base_Pizza* pizza = Italian->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
        Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(pepp->get_topping(), "Pepperoni");
        EXPECT_EQ(pepp->get_cost(), 2.35);

        Olive* olive = new Olive(pepp);
        Onion* onion = new Onion(olive);

        EXPECT_EQ(onion->get_topping(), "Onion");
        EXPECT_EQ(onion->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest9) {
        Pizza_Factory* Italian = new Italian_Style_Pizza;
        Base_Pizza* pizza = Italian->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
        Spinach* spinach = new Spinach(pepp);

        EXPECT_EQ(pepp->get_topping(), "Pepperoni");
        EXPECT_EQ(pepp->get_cost(), 2.35);

        Olive* olive1 = new Olive(pepp);
        Onion* onion = new Onion(olive1);

	Olive* olive2 = new Olive(onion);

        EXPECT_EQ(olive2->get_topping(), "Olive");
        EXPECT_EQ(olive2->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest10) {
        Pizza_Factory* Italian = new Italian_Style_Pizza;
        Base_Pizza* pizza = Italian->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
	Salami* sal = new Salami(pepp);
	Tomato* tom = new Tomato(sal);
	Tuna* tuna = new Tuna(tom);
	Olive* olive = new Olive(tuna);

        EXPECT_EQ(olive->get_topping(), "Olive");
        EXPECT_EQ(olive->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest11) {
        Pizza_Factory* NY = new NY_Style_Pizza;
        Base_Pizza* pizza = NY->get_pizza();

        Pepperoni* pepp1 = new Pepperoni(pizza);
        Salami* sal1 = new Salami(pepp1);
        Tomato* tom1 = new Tomato(sal1);
        Tuna* tuna1 = new Tuna(tom1);
        Olive* olive1 = new Olive(tuna1);
	Pepperoni* pepp2 = new Pepperoni(olive1);
        Salami* sal2 = new Salami(pepp2);
	Tomato* tom2 = new Tomato(olive1);
        Tuna* tuna2 = new Tuna(tom2);
        Olive* olive2 = new Olive(tuna2);
		
        EXPECT_EQ(tuna2->get_topping(), "Tuna");
        EXPECT_EQ(tuna2->get_cost(), 4.10);
}

TEST(ToppingsTest, DecorateTest12) {
        Pizza_Factory* NY = new NY_Style_Pizza;
        Base_Pizza* pizza = NY->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
        Salami* sal = new Salami(pepp);
        Tomato* tom1 = new Tomato(sal);
        Tuna* tuna1 = new Tuna(tom1);
        Olive* olive1 = new Olive(tuna1);
	Pepperoni* pepp2 = new Pepperoni(olive1);
        Salami* sal2 = new Salami(pepp2);
	Tomato* tom2 = new Tomato(olive1);
        Tuna* tuna2 = new Tuna(tom2);
        Olive* olive2 = new Olive(tuna2);		
	Pepperoni* pepp3 = new Pepperoni(olive2);
        Salami* sal3 = new Salami(pepp3);
        Tomato* tom3 = new Tomato(sal3);
        Tuna* tuna3 = new Tuna(tom3);
        Olive* olive3 = new Olive(tuna3);
			
        EXPECT_EQ(tom2->get_topping(), "Dried Tomato");
        EXPECT_EQ(tom2->get_cost(), 1.55);
}

TEST(ToppingsTest, DecorateTest13) {
        Pizza_Factory* Chicago = new Chicago_Style_Pizza;
        Base_Pizza* pizza = Chicago->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
        Salami* sal = new Salami(pepp);
        Tomato* tom = new Tomato(sal);
        Tuna* tuna = new Tuna(tom);
        Olive* olive = new Olive(tuna);
	Pepperoni* pepp2 = new Pepperoni(olive);
        Salami* sal2 = new Salami(pepp2);
        Tomato* tom2 = new Tomato(sal2);
        Tuna* tuna2 = new Tuna(tom2);
        Olive* olive2 = new Olive(tuna2);
	Pepperoni* pepp3 = new Pepperoni(olive2);
        Salami* sal3 = new Salami(pepp3);
        Tomato* tom3 = new Tomato(sal3);
        Tuna* tuna3 = new Tuna(tom3);
        Olive* olive3 = new Olive(tuna3);

        EXPECT_EQ(sal3->get_topping(), "Salami");
        EXPECT_EQ(sal3->get_cost(), 2.35);
}

TEST(ToppingsTest, DecorateTest14) {
        Pizza_Factory* Chicago = new Chicago_Style_Pizza;
        Base_Pizza* pizza = Chicago->get_pizza();

        Pepperoni* pepp = new Pepperoni(pizza);
        Salami* sal = new Salami(pepp);
        Tomato* tom = new Tomato(sal);
        Tuna* tuna = new Tuna(tom);
        Olive* olive = new Olive(tuna);
        Pepperoni* pepp2 = new Pepperoni(olive);
        Salami* sal2 = new Salami(pepp2);
        Tomato* tom2 = new Tomato(sal2);
        Tuna* tuna2 = new Tuna(tom2);
        Olive* olive2 = new Olive(tuna2);
        Pepperoni* pepp3 = new Pepperoni(olive2);
        Salami* sal3 = new Salami(pepp3);
        Tomato* tom3 = new Tomato(sal3);
        Tuna* tuna3 = new Tuna(tom3);
        Olive* olive3 = new Olive(tuna3);

        EXPECT_EQ(pepp->get_topping(), "Pepperoni");
        EXPECT_EQ(pepp->get_cost(), 2.35);
}
	
#endif // __TOPPINGS_TESTS_HPP
