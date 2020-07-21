#include <iostream>

#include "Factory_comp/Cheese.hpp"
#include "Factory_comp/Chunky_red.hpp"
#include "Factory_comp/Crust.hpp"
#include "Factory_comp/Deep_dish.hpp"
#include "Factory_comp/Fatty_ch.hpp"
#include "Factory_comp/Italian_sa.hpp"
#include "Factory_comp/Layered_ch.hpp"
#include "Factory_comp/Light_Red.hpp"
#include "Factory_comp/Mixed_ch.hpp"
#include "Factory_comp/Sauce.hpp"
#include "Factory_comp/Thick_cr.hpp"
#include "Factory_comp/Thin_cr.hpp"
#include "basic_pizza.hpp"
#include "pizza_factory.hpp"
#include "Chicago_style.hpp"
#include "NY_style.hpp"
#include "Italian_style.hpp"
using namespace std;

int main() {
		int number = 0;
		Pizza_Factory* f_pizza;
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

	return 0;
}
