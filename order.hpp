#ifndef __ORDER_HPP__
#define __ORDER_HPP__

#include "pizza.hpp"
#include <string>

class Order : public Pizza {
	public:
		std::string choice = " ";

		//Constructors
		Order(std::string name) : Pizza() {choice = name;}

		//Functions
		std::string get_topping() {return choice;}
};

#endif	// __ORDER_HPP__
