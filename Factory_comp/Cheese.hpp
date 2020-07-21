#ifndef __CHEESE_HPP__
#define __CHEESE_HPP__

#include <string>

using namespace std;
class Cheese {
	protected:
        string Ch_type;
        double price;
        public:
                //Constructors
                Cheese(string t, double p): Ch_type(t), price(p) {};

                //Functions
                virtual string get_type() {return Ch_type;};
                virtual double get_price() {return price;};
};

#endif  // __CHEESE_HPP__
