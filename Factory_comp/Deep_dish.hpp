#ifndef __Deep_Dish_HPP__
#define __Deep_Dish_HPP__

#include <string>

#include "Crust.hpp"
using namespace std;
class Deep_Dish: public Crust{
	public:
	Deep_Dish(): Crust("Deep Dish", 4.50){};
};

#endif  // __DEEP_DISH_HPP__
