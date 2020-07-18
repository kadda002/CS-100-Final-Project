#ifndef __BELLPEPPER_HPP__
#define __BELLPEPPER_HPP__

#include "toppings_decorator.hpp"
#include <string>

class BellPepper : public ToppingsDecorator{
	public:
		//Constructor
		BellPepper(Pizza *ybp):ToppingsDecorator(ybp) {};

		//Functions
		std::string get_topping() { return top->get_topping() + ", Yellow Bell Peppers"; }
		double get_cost() { return top->get_cost() + 1.55; }
		
};

#endif	// __BELLPEPPER_HPP__
