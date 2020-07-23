#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__

#include <string>
#include <vector>
#include <iostream>
#include "pizza.hpp"

using namespace std;

class Visitor : public Pizza {
 	protected:
		int toppings_count = 0;	// returns the number of added toppings 

		vector<double> cost;	// holds the cost of the pizza elements 
		vector<string> type;	// holds the name of the pizza elements
	public:
                /* Constructor */
		 Visitor(): Pizza(){};
		
		// print function
		void print(){
			for(unsigned i = 0; i < cost.size(); ++i) {
				cout << type.at(i) << ": $" << cost.at(i) << "." << endl;
			}
			cout << "Total Pizza Price: $" << endl; 				
		}

		// virtual fonctions
		virtual void visit_pizza(Pizza* p)		{ }
		virtual void visit_anchovy(Anchovy* p)    	{ }
                virtual void visit_bellpepper(BellPepper* p() 	{ }
                virtual void visit_chicken(Chicken* p)   	{ }
                virtual void visit_meatball(Meatball* p)   	{ }
                virtual void visit_mushroom(Mushroom* p)   	{ }
                virtual void visit_olive(Olive* p)      	{ }
                virtual void visit_onion(Onion* p)      	{ }
                virtual void visit_pepperoni(Pepperoni* p)  	{ }
                virtual void visit_salami(Salami* p)     	{ }
                virtual void visit_spinach(Spinach* p)    	{ }
                virtual void visit_tomato(Tomato* p)     	{ }
                virtual void visit_tuna(Tuna* p)       		{ }
}

#endif // __VISITOR_HPP__
