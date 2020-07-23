#ifndef __TOPPINGS_DECORATOR_HPP__
#define __TOPPINGS_DECORATOR_HPP__

#include "../pizza.hpp"
#include <iostream>
#include <string>
#include "../visitor.hpp"
#include "../visitor.hpp"

class ToppingsDecorator : public Pizza {
	protected:
		Pizza* top;	//object that can only be distributed amongst itself and its subclasses

	public:
		//Constructors
		ToppingsDecorator() {};
		ToppingsDecorator(Pizza *t) { top = t; }
		
		//Functions
		virtual std::string get_topping() { return top->get_topping(); }
		virtual double get_cost() { return top->get_cost(); }
		//virtual void traverse() { top->traverse(); }

};

#endif	// __TOPPINGS_DECORATOR_HPP__
