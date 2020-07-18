#ifndef __OLIVE_HPP__
#define __OLIVE_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Olive : public ToppingsDecorator{
	public:
		//Constructor
		Olive(Pizza *olive):ToppingsDecorator(olive) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Olives"; }
		double get_cost() { return top->get_cost() + 1.55; }
		
};

#endif	// __OLIVE_HPP__
