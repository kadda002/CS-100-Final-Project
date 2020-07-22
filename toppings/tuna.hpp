#ifndef __TUNA_HPP__
#define __TUNA_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Tuna : public ToppingsDecorator{
	private:
		std::string topping_name = "Tuna";
		double topping_cost = 4.10; 
	public:
		//Constructor
		Tuna(Pizza_Decorator *tuna):ToppingsDecorator(tuna) {};

		//Functions
		std::string get_topping() { return top->topping_name; }
		double get_cost() { return top->topping_cost; }
		void traverse() {
                        ToppingsDecorator->traverse();
                        cout << get_topping() << " ";
                }
};

#endif	// __TUNA_HPP__
