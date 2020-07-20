#ifndef __ADD_TOP_HPP__
#define __ADD_TOP_HPP__

#include <iostream>
#include <cctype>

#include "../pizza.hpp"
#include "../order.hpp"

Pizza* add_top(char** input, int length) {
	/*Initializing loop*/
	Pizza* top;	//Initialize single character in topping name
     
	for(int i=0; i < length; i++) {
		if(isalpha(atoi(input[i]))) {
			top = new Order(input[i]);
		}
		else {
			return nullptr;
		}
	}

	return top;	//either return character or null based on input
}

#endif // __ADD_TOP_HPP__
