#ifndef __CHICKEN_HPP__
#define __CHICKEN_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Chicken : public ToppingsDecorator{
	private:
		std::string topping_name = "Chicken";
		double topping_cost = 2.35; 
	public:
		//Constructor
		Chicken(Pizza_Decorator *chicken):ToppingsDecorator(chicken) {};

		//Functions
		std::string get_topping() { return top->topping_name; }
		double get_cost() { return top->topping_cost; }
		void traverse() {
                        ToppingsDecorator->traverse();
                        cout << get_topping() << " ";
                }
};

#endif	// __CHICKEN_HPP__
