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
		std::string get_topping() { return top->topping_name; }
		double get_cost() { return top->topping_cost; }
		void traverse() {
                        ToppingsDecorator->traverse();
                        cout << get_topping() << " ";
                }
};

#endif	// __SPINACH_HPP__
