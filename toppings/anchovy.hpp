#ifndef __ANCHOVY_HPP__
#define __ANCHOVY_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Anchovy : public ToppingsDecorator{
	public:
		//Constructor
		Anchovy(Pizza *anch):ToppingsDecorator(anch) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Anchovies"; }
		double get_cost() { return top->get_cost() + 4.10; }
		
};

#endif	// __ANCHOVY_HPP__
