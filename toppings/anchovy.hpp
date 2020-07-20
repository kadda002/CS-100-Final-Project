#ifndef __ANCHOVY_HPP__
#define __ANCHOVY_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Anchovy : public ToppingsDecorator{
	private:
		std::string topping_name = " Anchovy";
		double topping_cost = 4.10; 
	public:
		//Constructor
		Anchovy(Pizza *anch):ToppingsDecorator(anch) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		
};

#endif	// __ANCHOVY_HPP__
