#include <iostream>
#include <iomanip>

#include "Factory_comp/components.hpp"

#include "basic_pizza.hpp"
#include "pizza_factory.hpp"
#include "Chicago_style.hpp"
#include "NY_style.hpp"
#include "Italian_style.hpp"
#include "toppings/toppings.hpp"
#include "pizza_decorator.hpp"

using namespace std;

int main(int argc, char** argv) {
	Pizza_Decorator* d_pizza;

	Anchovy* anch; BellPepper* bell; Chicken* chicken; Meatball* mb; Mushroom* mush; Olive* olive;
        Onion* onion; Pepperoni* pepp; Salami* sal; Spinach* spinach; Tomato* tom; Tuna* tuna;

	Pizza_Factory* f_pizza;
        int choice = 0;
        bool add_more = true;
	int number = 0;

                cout << "Please select what type of pizza: " << endl;
                cout << "1: Chicago" << endl;
                cout << "2: NY" << endl;
                cout << "3: Italian" << endl;
                cin >> number;
                if (number == 1)
                {
                        f_pizza = new Chicago_Style_Pizza;
                }
                else if (number == 2)
                {
                        f_pizza = new NY_Style_Pizza;
                }
                else if (number == 3)
                {
                        f_pizza = new Italian_Style_Pizza;
                }
                else{
                        cout << "Wrong input Exiting" << endl;
                        return 0;
                }
                Base_Pizza* pizza = f_pizza -> get_pizza();
                pizza -> test_details();

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
                        cout << "11." << tom->get_topping() << setw(10) << "$" << tom->get_cost() << endl;
                        cout << "12." << tuna->get_topping() << setw(21) << "$" << tuna->get_cost() << endl;
	
	while(add_more) {
		cout << "Enter any (more) toppings from the list above you wish to add to your pizza, or enter 0 if not: " << endl;
		cin >> choice;

		switch(choice) {
			case 1:
				d_pizza = new Anchovy(d_pizza); break;
			case 2:
                                d_pizza = new BellPepper(d_pizza); break;
			case 3:
                                d_pizza = new Chicken(d_pizza); break;
			case 4:
                                d_pizza = new Meatball(d_pizza); break;
			case 5:
                                d_pizza = new Mushroom(d_pizza); break;
			case 6:
                                d_pizza = new Olive(d_pizza); break;
			case 7:
                                d_pizza = new Onion(d_pizza); break;
			case 8:
                                d_pizza = new Pepperoni(d_pizza); break;
			case 9:
                                d_pizza = new Salami(d_pizza); break;
			case 10:
                                d_pizza = new Spinach(d_pizza); break;
			case 11:
                                d_pizza = new Tomato(d_pizza); break;
			case 12:
                                d_pizza = new Tuna(d_pizza); break;
			case 0:
				add_more = false; break;
			default:
				cout << "Invalid Input!!" <<endl;
		}
	}

	return 0;
}

