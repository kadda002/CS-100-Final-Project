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
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		void traverse() {
                        //ToppingsDecorator->traverse();
                        cout << top->get_topping() << " ";
                }
};

#endif	// __TUNA_HPP__
