#ifndef __MEATBALL_HPP__
#define __MEATBALL_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Meatball : public ToppingsDecorator{
	private:
		std::string topping_name = "Meatball";
		double topping_cost = 2.35; 
	public:
		//Constructor
		Meatball(Pizza *mb):ToppingsDecorator(mb) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
};

#endif	// __MEATBALL_HPP__
