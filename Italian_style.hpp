#ifndef __ITALIAN_STYLE_HPP__
#define __ITALIAN_STYLE_HPP__

#include <string>
using namespace std;
#include "pizza_factory.hpp"
#include "Factory_comp/Crust.hpp"
#include "Factory_comp/Cheese.hpp"
#include "Factory_comp/Sauce.hpp"
#include "Factory_comp/Italian_sa.hpp"
#include "Factory_comp/Mixed_ch.hpp"
#include "Factory_comp/Thick_cr.hpp"
class Italian_Style_Pizza : public Pizza_Factory {
                Crust* get_Crust(){
                	return new Thick_Crust();
                };
                Sauce* get_Sauce(){
                	return new Italian_Sauce();
                };
                Cheese* get_Cheese(){
                	return new Layered_Mozzarella_Cheese();
                };
                Base_Pizza* get_pizza(){
                	Base_Pizza* pizza = new Base_Pizza("Italian Style Pizza");
                	pizza -> set_crust(get_Crust());
                	pizza -> set_cheese(get_Cheese());
                	pizza -> set_sauce(get_Sauce());
                	return pizza;
                };
};

#endif  // __ITALIAN_STYLE_HPP__
