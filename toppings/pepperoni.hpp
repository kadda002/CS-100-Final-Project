#ifndef __PEPPERONI_HPP__
#define __PEPPERONI_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Pepperoni : public ToppingsDecorator{
	private:
		std::string topping_name = "Pepperoni";
		double topping_cost = 2.35; 
	public:
		//Constructor
		Pepperoni(Pizza_Decorator *pepp):ToppingsDecorator(pepp) {};

		//Functions
		std::string get_topping() { return top->topping_name; }
		double get_cost() { return top->topping_cost; }
		void traverse() {
                        ToppingsDecorator->traverse();
                        cout << get_topping() << " ";
                }
};

#endif	// __PEPPERONI_HPP__
