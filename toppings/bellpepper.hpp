#ifndef __BELLPEPPER_HPP__
#define __BELLPEPPER_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class BellPepper : public ToppingsDecorator{
	private:
		std::string topping_name = "YellowBellPepper";
		double topping_cost = 1.55; 
	public:
		//Constructor
		BellPepper(Pizza_Decorator *bell):ToppingsDecorator(bell) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		void traverse() {
                        //ToppingsDecorator->traverse();
                        cout << top->get_topping() << " ";
                }
};

#endif	// __BELLPEPPER_HPP__
