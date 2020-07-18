#ifndef __MUSHROOM_HPP__
#define __MUSHROOM_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Mushroom : public ToppingsDecorator{
	public:
		//Constructor
		Mushroom(Pizza *mush):ToppingsDecorator(mush) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Mushrooms"; }
		double get_cost() { return top->get_cost() + 1.55; }
		
};

#endif	// __MUSHROOM_HPP__
