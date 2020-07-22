#ifndef __SALAMI_HPP__
#define __SALAMI_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Salami : public ToppingsDecorator{
	private:
		std::string topping_name = "Salami";
		double topping_cost = 2.35; 
	public:
		//Constructor
		Salami(Pizza_Decorator *sal):ToppingsDecorator(sal) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		void traverse() {
                        //ToppingsDecorator->traverse();
                        cout << top->get_topping() << " ";
                }
};

#endif	// __SALAMI_HPP__
