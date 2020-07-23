#ifndef __PRICE_VISITOR_HPP__
#define __PRICE_VISITOR_HPP__

#include "Visitor"

using namespace std;

// Price Visitor
class Price_Visitor : public Visitor {
        protected:
		double crust_c;
		double cheese_c;
		double sauce_c;
		double pizza_c;
		double anchovy_c;
		double bellpepper_c;
		double chicken_c;
		double meatball_c;
		double mushroom_c;
		double olive_c;
		double onion_c;
		double pepperoni_c;
		double salami_c;
		double spinach_c;

	public:
		// Constructor
		Price_Visitor : Visitor() {}
				
	
		//Virtual Price Visitor Functions		
		virtual void visit_pizza(Pizza* p) {
			this->crust_c  = p->crust->get_cost();	
			this->cost.push_back(this->crust_c);		// add crust cost

                        this->cheese_c = p->cheese->get_cost();
			this->cost.push_back(this->cheese_c);            // add cheese cost

                        this->sauce_c  = p->sauce->get_cost();
			this->cost.push_back(this->sauce_c);            // add sauce cost
			
                        this->pizza_c  = crust_c + cheese_c + sauce_c;            
		}

		

                virtual void visit_anchovy(Anchovy* p)      { this->anchovy_c    = p->get_cost(); this->cost.push_back(this->anchovy_c); }
                virtual void visit_bellpepper(BellPepper* p){ this->bellpepper_c = p->get_cost(); this->cost.push_back(this->bellpepper_c); }
                virtual void visit_chicken(Chicken* p)      { this->chicken_c    = p->get_cost(); this->cost.push_back(this->chicken_c); }
                virtual void visit_meatball(Meatball* p)    { this->meatball_c   = p->get_cost(); this->cost.push_back(this->meatball_c); }
                virtual void visit_mushroom(Mushroom* p)    { this->mushroom_c   = p->get_cost(); this->cost.push_back(this->mushroom_c); }
                virtual void visit_olive(Olive* p)          { this->olive_c      = p->get_cost(); this->cost.push_back(this->olive_c); }
                virtual void visit_onion(Onion* p)          { this->onion_c      = p->get_cost(); this->cost.push_back(this->onion_c);   }
                virtual void visit_pepperoni(Pepperoni* p)  { this->pepperoni_c  = p->get_cost(); this->cost.push_back(this->pepperoni_c); }
                virtual void visit_salami(Salami* p)        { this->salami_c     = p->get_cost(); this->cost.push_back(this->salami_c); }
                virtual void visit_spinach(Spinach* p)      { this->spinach_c    = p->get_cost(); this->cost.push_back(this->spinach_c); }
                virtual void visit_tomato(Tomato* p)        { this->tomato_c     = p->get_cost(); this->cost.push_back(this->tomato_c); }
                virtual void visit_tuna(Tuna* p)            { this->tuna_c       = p->get_cost(); this->cost.push_back(this->tuna_c); }
		
		// getters
		double get_pizza_cost() { return this->pizza_c     ; }
		double get_crust()      { return this->crust_c     ; }
		double get_cheese()     { return this->cheese_c    ; }
		double get_sauce()      { return this->sauce_c     ; }
		double get_anchovy()    { return this->anchovy_c   ; }
                double get_bellpepper() { return this->bellpepper_c; }
                double get_chicken()    { return this->chicken_c   ; }
                double get_meatball()   { return this->meatball_c  ; }
                double get_mushroom()   { return this->mushroom_c  ; }
                double get_olive()      { return this->olive_c     ; }
                double get_onion()      { return this->onion_c     ; }
                double get_pepperoni()  { return this->pepperoni_c ; }
                double get_salami()     { return this->salami_c    ; }
                double get_spinach()    { return this->spinach_c   ; }
                double get_tomato()     { return this->tomato_c    ; }
                double get_tuna()       { return this->tuna_c      ; }

}

#endif // __PRICE_VISITOR_HPP__
