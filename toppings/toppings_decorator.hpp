#ifndef __TOPPINGS_DECORATOR_HPP__
#define __TOPPINGS_DECORATOR_HPP__

#include "../pizza_decorator.hpp"
#include <string>

class ToppingsDecorator : public Pizza_Decorator {
	protected:
		Pizza_Decorator* top;	//object that can only be distributed amongst itself and its subclasses

	public:
		//Constructors
		ToppingsDecorator() {};
		ToppingsDecorator(Pizza_Decorator *t) { this->top = t; }
		
		//Functions
		std::string get_topping() { return this->top->get_topping(); }
		double get_cost() { return this->top->get_cost(); }
		
};

#endif	// __TOPPINGS_DECORATOR_HPP__
