#ifndef __LAYERED_CH_HPP__
#define __LAYERED_CH_HPP__

#include <string>

#include "Cheese.hpp"
using namespace std;
class Layered_Mozzarella_Cheese: public Cheese{
	public:
	Layered_Mozzarella_Cheese(): Cheese("Layered Mozzarella Cheese", 5.50){};
        
};

#endif  // __LAYERED_CH_HPP__
