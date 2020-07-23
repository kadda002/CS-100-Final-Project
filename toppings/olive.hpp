#ifndef __OLIVE_HPP__
#define __OLIVE_HPP__

#include "toppings_decorator.hpp"
#include <iostream>
#include <string>
#include "../visitor.hpp"
class Olive : public ToppingsDecorator{
	private:
		std::string topping_name = "Olive";
		double topping_cost = 1.55; 
	public:
		//Constructor
		Olive(Pizza *pizza): ToppingsDecorator(pizza) {};

		//Functions
		std::string get_topping(){ return topping_name; }
                double get_cost(){ return topping_cost; }

		void accept(Visitor* V) {
                        V->visit_olive(this);
                }

};

#endif	// __OLIVE_HPP__
