#ifndef __TOPPINGS_DECORATOR_HPP__
#define __TOPPINGS_DECORATOR_HPP__

#include "../pizza.hpp"
#include "add_top.hpp"
#include <string>

class ToppingsDecorator : public Pizza {
	protected:
		Pizza* top;	//object that can only be distributed amongst itself and its subclasses

	public:
		//Constructors
		ToppingsDecorator() {};
		ToppingsDecorator(Pizza *t) { this->top = t; }
		ToppingsDecorator(char** input, int length) { top = add_top(input, length); }
		//Functions
		std::string get_topping() { return this->top->get_topping(); }
		double get_cost() { return this->top->get_cost(); }
		
};

#endif	// __TOPPINGS_DECORATOR_HPP__
