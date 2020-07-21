#ifndef __THIN_CR_HPP__
#define __THIN_CR_HPP__

#include <string>

#include "Crust.hpp"
using namespace std;
class Thin_Crust: public Crust{
	public:
	Thin_Crust(): Crust("Thin Crust", 3.00){};
};

#endif  // __THIN_CR_HPP__
