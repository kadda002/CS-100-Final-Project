#ifndef __MIXED_CH_HPP__
#define __MIXED_CH_HPP__

#include <string>

#include "Cheese.hpp"
using namespace std;
class Mixed_Cheese: public Cheese{
	public:
	Mixed_Cheese(): Cheese("Mixed Cheese", 3.50){};
        
};

#endif  // __MIXED_CH_HPP__
