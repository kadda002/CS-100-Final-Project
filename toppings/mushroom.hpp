#ifndef __MUSHROOM_HPP__
#define __MUSHROOM_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>

class Mushroom : public ToppingsDecorator{
	private:
		std::string topping_name = "Mushroom";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Mushroom(Pizza_Decorator *mush):ToppingsDecorator(mush) {};
		
		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		void traverse() {
                        //ToppingsDecorator->traverse();
                        cout << top->get_topping() << " ";
                }
};

#endif	// __MUSHROOM_HPP__
