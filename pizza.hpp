#ifndef __PIZZA_HPP__
#define __PIZZA_HPP__

#include <string>
#include "visitor.hpp"

using namespace std;
#include "Factory_comp/components.hpp"
class Pizza {
	protected:
		string type;
        	Crust* crust;
        	Sauce* sauce;
        	Cheese* cheese;
	public:
		//Constructors
		Pizza() {};

		//Functions
		virtual void set_crust(Crust* cr){
                	crust = cr;
                };
                virtual void set_sauce(Sauce* sa){
                	sauce = sa;
                };
                virtual void set_cheese(Cheese* ch){
                	cheese = ch;
                };
                virtual void test_details(){
                	cout << "Pizza Type: " << type << endl;
                	cout << "Crust Type: " << crust -> get_type() << " Crust Price: " << crust -> get_price() << endl;
                	cout << "Sauce Type: " << sauce -> get_type() << " Sauce Price: " << sauce -> get_price() << endl;
                	cout << "Cheese Type: " << cheese -> get_type() << " Cheese Price: " << cheese -> get_price() << endl;
                	
                };
                
                virtual string get_crust(){
                	return crust -> get_type();
                }; 
                
                virtual string get_cheese(){
                	return cheese -> get_type();
                };
                
                virtual string get_sauce(){
                	return sauce -> get_type();
                };
		
		virtual std::string get_topping() = 0;
		virtual double get_cost() = 0;
		
		void accept(Visitor* V) {
			V->visit_pizza(this);
		}; 

};

#endif	// __PIZZA_HPP__
