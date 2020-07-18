#ifndef __TOMATO_HPP__
#define __TOMATO_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Tomato : public ToppingsDecorator{
	public:
		//Constructor
		Tomato(Pizza *dt):ToppingsDecorator(dt) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Dried Tomatoes"; }
		double get_cost() { return top->get_cost() + 1.55; }
		
};

#endif	// __TOMATO_HPP__
