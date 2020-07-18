#ifndef __TUNA_HPP__
#define __TUNA_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Tuna : public ToppingsDecorator{
	public:
		//Constructor
		Tuna(Pizza *tuna):ToppingsDecorator(tuna) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Tuna"; }
		double get_cost() { return top->get_cost() + 4.10; }
		
};

#endif	// __TUNA_HPP__
