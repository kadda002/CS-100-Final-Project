#ifndef __BELLPEPPER_HPP__
#define __BELLPEPPER_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>
#include "../visitor.hpp"

class BellPepper : public ToppingsDecorator{
	private:
		std::string topping_name = "Yellow Bell Pepper";
		double topping_cost = 1.55; 
	public:
		//Constructor
		BellPepper(Pizza *bell):ToppingsDecorator(bell) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		
		void accept(Visitor* V) {
                        V->visit_bellpepper(this);
                }

};

#endif	// __BELLPEPPER_HPP__
