#ifndef __OLIVE_HPP__
#define __OLIVE_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Olive : public Toppings_Decorator{
	private:
		std::string topping_name = "Olive";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Olive(Pizza_Decorator *pizza): ToppingsDecorator(pizza) {};

		//Functions
		std::string get_topping(){ return top->topping_name; }
                double get_cost(){ return top->topping_cost; }
		void traverse() {
                        ToppingsDecorator->traverse();
                        cout << get_topping() << " ";
                }
};

#endif	// __OLIVE_HPP__
