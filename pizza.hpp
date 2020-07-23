#ifndef __PIZZA_DECORATOR_HPP__
#define __PIZZA_DECORATOR_HPP__

#include "base_pizza.hpp"
#include <string>


class Pizza: public Base_Pizza {
	protected:
		Base_Pizza* base_pizza;
	public:
		//Constructors
		Pizza(Base_Pizza* base) { base_pizza = base; }

		//Functions
		virtual std::string get_topping() = 0;
		virtual double get_cost() = 0;
		
};

#endif	// __PIZZA_DECORATOR_HPP__
