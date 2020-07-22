#ifndef __PIZZA_DESIGN_HPP__
#define __PIZZA_DESIGN_HPP__

#include <string>
using namespace std;

class Chicago_Style_Pizza;
class Italian_Style_Pizza;
class NY_Style_Pizza;

class Pizza_Design {
        private:
                Base_Pizza *pizza;

        public:
		//Constructors
		Pizza_Decorator() {};

                //Functions
                virtual Crust* get_Crust() = 0;
                virtual Sauce* get_Sauce() = 0;
                virtual Cheese* get_Cheese() = 0;
                virtual Base_Pizza* get_pizza() = 0;
		virtual std::string get_topping() = 0;
		virtual double get_cost() = 0;
	
};

#endif  // __PIZZA_DESIGN_HPP__

