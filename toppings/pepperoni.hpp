#ifndef __PEPPERONI_HPP__
#define __PEPPERONI_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Pepperoni : public ToppingsDecorator{
	public:
		//Constructor
		Pepperoni(Pizza *pep):ToppingsDecorator(pep) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Pepperonis"; }
		double get_cost() { return top->get_cost() + 2.35; }
		
};

#endif	// __PEPPERONI_HPP__
