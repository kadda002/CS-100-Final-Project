#ifndef __ONION_HPP__
#define __ONION_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Onion : public ToppingsDecorator{
	private:
		std::string topping_name = "Onion";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Onion(Pizza *onion):ToppingsDecorator(onion) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
};

#endif	// __ONION_HPP__
