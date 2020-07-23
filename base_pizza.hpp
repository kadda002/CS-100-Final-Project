#ifndef __BASE_PIZZA_HPP__
#define __BASE_PIZZA_HPP__

#include <string>
using namespace std;
#include "Factory_comp/Crust.hpp"
#include "Factory_comp/Cheese.hpp"
#include "Factory_comp/Sauce.hpp"
#include "pizza.hpp"
class Base_Pizza : public Pizza{
        public:

		//Constructors
		Base_Pizza(string t){ type = t;};
		
		//Functions
		string get_topping() { return "no topping"; }
		double get_cost() {return 0; }                
};

#endif  // __BASE_PIZZA_HPP__
