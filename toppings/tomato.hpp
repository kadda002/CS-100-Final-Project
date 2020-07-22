#ifndef __TOMATO_HPP__
#define __TOMATO_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Tomato : public ToppingsDecorator{
	private:
		std::string topping_name = "Dried Tomato";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Tomato(Pizza_Decorator *tom):ToppingsDecorator(tom) {};

		//Functions
		std::string get_topping() { return top->topping_name; }
		double get_cost() { return top->topping_cost; }
		void traverse() {
                        ToppingsDecorator->traverse();
                        cout << get_topping() << " ";
                }
};

#endif	// __TOMATO_HPP__
