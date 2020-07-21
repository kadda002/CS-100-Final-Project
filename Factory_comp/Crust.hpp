#ifndef __CRUST_HPP__
#define __CRUST_HPP__

#include <string>

using namespace std;
class Crust {
	protected:
        string Cr_type;
        double price;
        public:
                //Constructors
                Crust(string t, double p): Cr_type(t), price(p) {};

                //Functions
                virtual string get_type() {return Cr_type;};
                virtual double get_price() {return price;};
};

#endif  // __CRUST_HPP__
