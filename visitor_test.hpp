#include "gtest/gtest.h"
#include <iostream>
#include <string>


//#include "toppings/toppings_decorator.hpp"
//#include "toppings/toppings.hpp"
#include "Factory_comp/components.hpp"
#include "base_pizza.hpp"
#include "Chicago_style.hpp"
#include "NY_style.hpp"
#include "Italian_style.hpp"
#include "visitor.hpp"
#include "price_visitor.hpp"


using namespace std;

TEST(Visitor_test, test1) {
        Pizza_Factory* factory = new Italian_Style_Pizza;
        Base_Pizza* base = factory->get_pizza();

        Price_Visitor* v = new Price_Visitor();
        v->visit_pizza(base);

        EXPECT_EQ(v->get_crust(), 3.5) ;
        EXPECT_EQ(v->get_cheese(), 4.5);
        EXPECT_EQ(v->get_sauce(), 1.5) ;
}

