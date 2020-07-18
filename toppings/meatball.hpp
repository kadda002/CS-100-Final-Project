#ifndef __MEATBALL_HPP__
#define __MEATBALL_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Meatball : public ToppingsDecorator{
	public:
		//Constructor
		Meatball(Pizza *mb):ToppingsDecorator(mb) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Meatballs"; }
		double get_cost() { return top->get_cost() + 2.35; }
		
};

#endif	// __MEATBALL_HPP__
