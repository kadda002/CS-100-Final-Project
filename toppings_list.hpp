#ifndef __TOPPINGS_LIST_HPP__
#define __TOPPINGS_LIST_HPP_

#include "toppings/toppings.hpp"
#include <iomanip>

using namespace std;

class Toppings_List {
	private:
		Anchovy* anch;
		BellPepper* bell;
		Chicken* chicken;
		Meatball* mb;
		Mushroom* mush;
		Olive* olive;
		Onion* onion;
		Pepperoni* pepp;
		Salami* sal;
		Spinach* spinach;
		Tomato* tom;
		Tuna* tuna;
	public:
		void topping_details() {
			cout << " Topping Name          Topping Price" << endl;
			cout << " ------------------    --------------" << endl;
			cout << "1." << anch->get_topping() << setw(19) << "$" << anch->get_cost() << endl;
			cout << "2." << bell->get_topping() << setw(8) << "$" << bell->get_cost() << endl;
			cout << "3." << chicken->get_topping() << setw(19) << "$"  << chicken->get_cost() << endl;
			cout << "4." << mb->get_topping() << setw(19) << "$" << mb->get_cost() << endl;
			cout << "5." << mush->get_topping() << setw(18) << "$" << mush->get_cost() << endl;
			cout << "6." << olive->get_topping() << setw(21) << "$" << olive->get_cost() << endl;
			cout << "7." << onion->get_topping() << setw(21) << "$" << onion->get_cost() << endl;
			cout << "8." << pepp->get_topping() << setw(17) << "$" << pepp->get_cost() << endl;
			cout << "9." << sal->get_topping() << setw(20) << "$" << sal->get_cost() << endl;
			cout << "10." << spinach->get_topping() << setw(18) << "$" << spinach->get_cost() << endl;
			cout << "11." << tom->get_topping() << setw(11) << "$" << tom->get_cost() << endl;
			cout << "12." << tuna->get_topping() << setw(21) << "$" << tuna->get_cost() << endl;
		}
};

#endif	// __TOPPINGS_LIST_HPP
