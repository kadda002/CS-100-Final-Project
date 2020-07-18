#ifndef __SPINACH_HPP__
#define __SPINACH_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Spinach : public ToppingsDecorator{
	public:
		//Constructor
		Spinach(Pizza *spin):ToppingsDecorator(spin) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Spinach"; }
		double get_cost() { return top->get_cost() + 1.55; }
		
};

#endif	// __SPINACH_HPP__
