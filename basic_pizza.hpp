#ifndef __BASE_PIZZA_HPP__
#define __BASE_PIZZA_HPP__

#include <string>
using namespace std;
#include "Factory_comp/Crust.hpp"
#include "Factory_comp/Cheese.hpp"
#include "Factory_comp/Sauce.hpp"

class Base_Pizza {
        string type;
        Crust* crust;
        Sauce* sauce;
        Cheese* cheese;
        public:
                //Constructors
                Base_Pizza(string t): type(t) {};

                //Functions
                void set_crust(Crust* cr){
                	crust = cr;
                };
                void set_sauce(Sauce* sa){
                	sauce = sa;
                };
                void set_cheese(Cheese* ch){
                	cheese = ch;
                };
                void test_details(){
                	cout << "Pizza Type: " << type << endl;
                	cout << "Crust Type: " << crust -> get_type() << " Crust Price: " << crust -> get_price() << endl;
                	cout << "Sauce Type: " << sauce -> get_type() << " Sauce Price: " << sauce -> get_price() << endl;
                	cout << "Cheese Type: " << cheese -> get_type() << " Cheese Price: " << cheese -> get_price() << endl;
                	
                }
};

#endif  // __BASE_PIZZA_HPP__
