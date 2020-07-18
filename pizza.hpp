#ifndef __PIZZA_HPP__
#define __PIZZA_HPP__

#include <string>

class Pizza {
	public:
		//Constructors
		Pizza() {};

		//Functions
		virtual std::string get_topping() = 0;
		virtual double get_cost() = 0;
		
};

#endif	// __PIZZA_HPP__
