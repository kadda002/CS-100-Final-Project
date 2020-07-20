#ifndef __ORDER_HPP__
#define __ORDER_HPP__

#include "pizza.hpp"
#include <string>

class Order : public Pizza {
	public:
		std::string choice = "";
		double cost = 0.0;

		//Constructors
		Order(std::string name) : Pizza() {choice = name;}
		
		//Functions
		std::string get_topping() {return choice;}
		double get_cost() {return cost;}
};

#endif	// __ORDER_HPP__
