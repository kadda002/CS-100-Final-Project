#ifndef __CHICKEN_HPP__
#define __CHICKEN_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Chicken : public ToppingsDecorator{
	private:
		std::string topping_name = "Chicken";
		double topping_cost = 2.35; 
	public:
		//Constructor
		Chicken(Pizza *chicken):ToppingsDecorator(chicken) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
};

#endif	// __CHICKEN_HPP__
