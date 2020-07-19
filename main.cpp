#include <iostream>

#include "toppings/toppings.hpp"

using namespace std;

int main(int argc, char** argv) {
	Pizza* pizza = new Pizza();
	string choice_topping;
	bool add_more = true;

	while(valid_topping) {
		cout << "Enter any (more) toppings from the list you wish to add to your pizza, or enter N if not: " << endl;
		// cin >> choice_topping;
		switch(choice_topping) {
			case Anchovy:
				pizza = new Anchovy(pizza); break;
			case Bellpepper:
                                pizza = new Bellpepper(pizza); break;
			case Chicken:
                                pizza = new Chicken(pizza); break;
			case Meatball:
                                pizza = new Anchovy(pizza); break;
			case Mushroom:
                                pizza = new Anchovy(pizza); break;
			case Olive:
                                pizza = new Anchovy(pizza); break;
			case Onion:
                                pizza = new Anchovy(pizza); break;
			case Pepperoni:
                                pizza = new Anchovy(pizza); break;
			case Salami:
                                pizza = new Anchovy(pizza); break;
			case Spinach:
                                pizza = new Anchovy(pizza); break;
			case Tomato:
                                pizza = new Anchovy(pizza); break;
			case Tuna:
                                pizza = new Anchovy(pizza); break;
			case N:
				add_more = false; break;
			default:
				cout << "Invalid Input!!" <<endl;
		}
	}

	return 0;
}
