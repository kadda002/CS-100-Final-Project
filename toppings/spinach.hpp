#ifndef __SPINACH_HPP__
#define __SPINACH_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Spinach : public ToppingsDecorator{
	private:
		std::string topping_name = "Spinach";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Spinach(Pizza_Decorator *spinach):ToppingsDecorator(spinach) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		void traverse() {
                        //ToppingsDecorator->traverse();
                        cout << top->get_topping() << " ";
                }
};

#endif	// __SPINACH_HPP__
