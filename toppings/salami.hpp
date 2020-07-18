#ifndef __SALAMI_HPP__
#define __SALAMI_HPP__

#include "toppings_decorator.hpp"
#include <string>

class Salami : public ToppingsDecorator{
	public:
		//Constructor
		Salami(Pizza *salami):ToppingsDecorator(salami) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Salami"; }
		double get_cost() { return top->get_cost() + 2.35; }
		
};

#endif	// __SALAMI_HPP__
