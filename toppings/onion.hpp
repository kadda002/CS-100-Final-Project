#ifndef __ONION_HPP__
#define __ONION_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Onion : public ToppingsDecorator{
	public:
		//Constructor
		Onion(Pizza *oni):ToppingsDecorator(oni) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Onions"; }
		double get_cost() { return top->get_cost() + 1.55; }
		
};

#endif	// __ONION_HPP__
