#ifndef __CHICKEN_HPP__
#define __CHICKEN_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Chicken : public ToppingsDecorator{
	public:
		//Constructor
		Chicken(Pizza *chicken):ToppingsDecorator(chicken) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Chicken"; }
		double get_cost() { return top->get_cost() + 2.35; }
		
};

#endif	// __PEPPERONI_HPP__
