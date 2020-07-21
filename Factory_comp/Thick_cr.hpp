#ifndef __THICK_CR_HPP__
#define __THICK_CR_HPP__

#include <string>

#include "Crust.hpp"
using namespace std;
class Thick_Crust: public Crust{
	public:
	Thick_Crust(): Crust("Thick Crust", 3.50){};
};

#endif  // __THICK_CR_HPP__
