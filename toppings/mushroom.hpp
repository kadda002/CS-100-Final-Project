#ifndef __MUSHROOM_HPP__
#define __MUSHROOM_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>
#include "../visitor.hpp"
class Mushroom : public ToppingsDecorator{
	private:
		std::string topping_name = "Mushroom";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Mushroom(Pizza *mush):ToppingsDecorator(mush) {}
		
		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }

		void accept(Visitor* V) {
                        V->visit_mushroom(this);
                }

};

#endif	// __MUSHROOM_HPP__
