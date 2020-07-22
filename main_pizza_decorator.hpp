#include <iostream>

#include "toppings/toppings.hpp"
#include "pizza_decorator.hpp"
#include "topping_list.hpp"

using namespace std;

int main(int argc, char** argv) {
	Pizza_Decorator* d_pizza;
	int choice = 0;
	bool add_more = true;

	//Topping_List* t_list = 
	//t_list->topping_details();
	
	while(add_more) {
		cout << "Enter any (more) toppings from the list above you wish to add to your pizza, or enter 0 if not: " << endl;
		cin >> choice;

		switch(choice) {
			case 1:
				d_pizza = new Anchovy(d_pizza); break;
			case 2:
                                d_pizza = new Bellpepper(d_pizza); break;
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
