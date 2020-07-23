#ifndef __TYPE_VISITOR_HPP__
#define __TYPE_VISITOR_HPP__

#include <string>
#include "pizza.hpp"

using namespace std;

class Type_Visitor : public Visitor {
        protected:
		string pizza_type ;
		string crust_type ;
		string cheese_type;
		string sauce_type ;
		int anchovy    = 0;
		int bellpepper = 0;	
		int chicken    = 0;
		int meatball   = 0;
		int mushroom   = 0;
		int olive      = 0;
		int onion      = 0;
		int pepperoni  = 0;
		int salami     = 0;
		int spinach    = 0;
		int tomato     = 0;
		int tuna       = 0;
	
	public:
                // constructor
                Type_Visitor(): Visitor() {}

                // functions
                void visit_pizza(Pizza* p)           {       
							this->pizza_type  = p->type;
							this->type.push_back(this->pizza_type);

							this->crust_type  = p->get_crust();
							this->type.push_back(this->crust_type);

							this->cheese_type = p->get_cheese();
							this->type.push_back(this->cheese_type);
							
							this->sauce_type  = p->get_sauce();
							this->type.push_back(this->sauce_type);
	        }

                void visit_anchovy(Anchovy* p)       { this->anchovy++     ; this->toppings_count++; this->type.push_back("Anchovy");}
                void visit_bellpepper(BellPepper* p) { this->bellpepper++  ; this->toppings_count++; this->type.push_back("Bellpepper");}
                void visit_chicken(Chicken* p)       { this->chicken++     ; this->toppings_count++; this->type.push_back("Chicken");}
                void visit_meatball(Meatball* p)     { this->meatball++    ; this->toppings-count++; this->type.push_back("Meatball");}
                void visit_mushroom(Mashroom* p)     { this->mushroom++    ; this->toppings-count++; this->type.push_back("Mashroom");}
                void visit_olive(Olive* p)           { this->olive++       ; this->toppings-count++; this->type.push_back("Olive");}
                void visit_onion(Onion* p)           { this->onion++       ; this->toppings-count++; this->type.push_back("Onion");}
                void visit_pepperoni(Pepperoni* p)   { this->pepperoni++   ; this->toppings-count++; this->type.push_back("Pepperoni");}
                void visit_salami(Salami* p)         { this->salami++      ; this->toppings-count++; this->type.push_back("Salami"); }
                void visit_spinach(Spinach* p)       { this->spinach++     ; this->toppings-count++; this->type.push_back("Spinach"); }
                void visit_tomato(Tomato* p)         { this->tomato++      ; this->toppings-count++; this->type.push_back("Tomato"); }
                void visit_tuna(Tune* p)             { this->tuna++        ; this->toppings-count++; this->type.push_back("Tune"); }

		// Getters
		string get_pizza_type() {    return pizza_type; }
		string get_crust_type() {    return crust_type; }
		string get_cheese_type(){    return cheese_type;}
		string get_sauce_type() {    return sauce_type; }
		string get_anchovy()    {    return "Anchovy";  }
		string get_bellpepper() {    return "Bellpepper";}		
		string get_chicken()    {    return "Chicken";  }
		string get_meatball()   {    return "Meatball"; }
		string get_mushroom()   {    return "Mashroom"; }
		string get_olive()      {    return "Olive";    }
		string get_onion()      {    return "Onion";    }
		string get_pepperoni()  {    return "Pepperoni";}
		string get_salami()     {    return "Salami";   }
		string get_spinach()    {    return "Spinach";  }
		string get_tomato()     {    return "Tomato";   }
		string get_tuna()       {    return "Tune";     }


		int get_anchovy()    { return this->anchovy   ; }
                int get_bellpepper() { return this->bellpepper; }
                int get_chicken()    { return this->chicken   ; }
                int get_meatball()   { return this->meatball  ; }
                int get_mushroom()   { return this->mushroom  ; }
                int get_olive()      { return this->olive     ; }
                int get_onion()      { return this->onion     ; }
                int get_pepperoni()  { return this->pepperoni ; }
                int get_salami()     { return this->salami    ; }
                int get_spinach()    { return this->spinach   ; }
                int get_tomato()     { return this->tomato    ; }
                int get_tuna()       { return this->tuna      ; }

}

#endif // __TYPE_VISITOR_HPP__

