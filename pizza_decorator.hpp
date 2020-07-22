#ifndef __PIZZA_DECORATOR_HPP__
#define __PIZZA_DECORATOR_HPP__

#include <string>

class Pizza_Decorator {
	public:
		//Constructors
		Pizza_Decorator() {};

		//Functions
		virtual std::string get_topping() = 0;
		virtual double get_cost() = 0;
		
};

#endif	// __PIZZA_DECORATOR_HPP__
