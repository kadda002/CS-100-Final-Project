#ifndef __ANCHOVY_HPP__
#define __ANCHOVY_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Anchovy : public ToppingsDecorator{
	private:
		std::string topping_name = "Anchovy";
		double topping_cost = 4.10; 
	public:
		//Constructor
		Anchovy(Pizza_Decorator *anch):ToppingsDecorator(anch) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		void traverse() { 
			//ToppingsDecorator->traverse();
			cout << top->get_topping() << " ";
		}
};

#endif	// __ANCHOVY_HPP__
