#ifndef __PEPPERONI_HPP__
#define __PEPPERONI_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>
#include "../visitor.hpp"
class Pepperoni : public ToppingsDecorator{
	private:
		std::string topping_name = "Pepperoni";
		double topping_cost = 2.35; 
	public:
		//Constructor
		Pepperoni(Pizza *pepp):ToppingsDecorator(pepp) {};

		//Functions
		std::string get_topping() { return topping_name; }
		double get_cost() { return topping_cost; }
		
		void accept(Visitor* V) {
                        V->visit_pepperoni(this);
                }


};

#endif	// __PEPPERONI_HPP__
