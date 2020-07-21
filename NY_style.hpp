#ifndef __NY_STYLE_HPP__
#define __NY_STYLE_HPP__

#include <string>
using namespace std;
#include "pizza_factory.hpp"
#include "Factory_comp/Crust.hpp"
#include "Factory_comp/Cheese.hpp"
#include "Factory_comp/Sauce.hpp"
#include "Factory_comp/Light_Red.hpp"
#include "Factory_comp/Fatty_ch.hpp"
#include "Factory_comp/Thin_cr.hpp"
class NY_Style_Pizza : public Pizza_Factory {
                Crust* get_Crust(){
                	return new Thin_Crust();
                };
                Sauce* get_Sauce(){
                	Sauce* s = new Light_Red_Sauce();
                	return s;
                };
                Cheese* get_Cheese(){
                	return new Fatty_Mozzarella_Cheese();
                };
                Base_Pizza* get_pizza(){
                	Base_Pizza* pizza = new Base_Pizza("NY Style Pizza");
                	pizza -> set_crust(get_Crust());
                	pizza -> set_cheese(get_Cheese());
                	pizza -> set_sauce(get_Sauce());
                	return pizza;
                };
};

#endif  // __NY_STYLE_HPP__
