#ifndef __SAUCE_HPP__
#define __SAUCE_HPP__

#include <string>

using namespace std;
class Sauce {
	protected:
        string Sa_type;
        double price;
        public:
                //Constructors
                Sauce(string t, double p): Sa_type(t), price(p) {};

                //Functions
                virtual string get_type() {return Sa_type;};
                virtual double get_price() {return price;};
};

#endif  // __SAUCE_HPP__
