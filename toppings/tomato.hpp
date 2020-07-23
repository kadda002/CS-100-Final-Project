#ifndef __TOMATO_HPP__
#define __TOMATO_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Tomato : public ToppingsDecorator{
	private:
		std::string topping_name = "Dried Tomato";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Tomato(Pizza *tom):ToppingsDecorator(tom) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
};

#endif	// __TOMATO_HPP__
