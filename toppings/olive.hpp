#ifndef __OLIVE_HPP__
#define __OLIVE_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Olive : public ToppingsDecorator{
	private:
		std::string topping_name = " Olive";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Olive(Pizza *olive):ToppingsDecorator(olive) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		
};

#endif	// __OLIVE_HPP__
