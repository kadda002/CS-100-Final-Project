#ifndef __CHICAGO_STYLE_HPP__
#define __CHICAGO_STYLE_HPP__

#include <string>
using namespace std;
#include "pizza_factory.hpp"
#include "Factory_comp/Crust.hpp"
#include "Factory_comp/Cheese.hpp"
#include "Factory_comp/Sauce.hpp"
#include "Factory_comp/Chunky_red.hpp"
#include "Factory_comp/Layered_ch.hpp"
#include "Factory_comp/Deep_dish.hpp"
class Chicago_Style_Pizza : public Pizza_Factory {
                Crust* get_Crust(){
                	return new Deep_Dish();
                };
                Sauce* get_Sauce(){
                	return new Chunky_Red_Sauce();
                };
                Cheese* get_Cheese(){
                	return new Layered_Mozzarella_Cheese();
                };
                Base_Pizza* get_pizza(){
                	Base_Pizza* pizza = new Base_Pizza("Chicago Style Pizza");
                	pizza -> set_crust(get_Crust());
                	pizza -> set_cheese(get_Cheese());
                	pizza -> set_sauce(get_Sauce());
                	return pizza;
                };
};

#endif  // __CHICAGO_STYLE_HPP__
