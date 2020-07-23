#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__

#include <string>
#include <vector>
#include <iostream>
#include "pizza.hpp"
#include "base_pizza.hpp"
#include "toppings/toppings.hpp"

using namespace std;

class Visitor {
        protected:
                int toppings_count = 0;
                vector<double> cost;
                vector<string> type;
        public:

                 Visitor(){};


                void print(){
                        for(unsigned i = 0; i < cost.size(); ++i) {
                                cout << type.at(i) << ": $" << cost.at(i) << "." << endl;
                        }
                        cout << "Total Pizza Price: $" << endl;
                };

		
                virtual void   visit_pizza(Pizza* p);
                virtual double get_crust();
                virtual double get_cheese();
                virtual double get_sauce();

		virtual void visit_anchovy(Anchovy* p);
                virtual void visit_bellpepper(BellPepper* p);
                virtual void visit_chicken(Chicken* p);
                virtual void visit_meatball(Meatball* p);
                virtual void visit_mushroom(Mushroom* p);
                virtual void visit_olive(Olive* p);
                virtual void visit_onion(Onion* p);
                virtual void visit_pepperoni(Pepperoni* p);
                virtual void visit_salami(Salami* p) ;
                virtual void visit_spinach(Spinach* p);
                virtual void visit_tomato(Tomato* p) ;
                virtual void visit_tuna(Tuna* p);
};

#endif // __VISITOR_HPP__
