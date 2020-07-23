#include <iostream>

#include "Factory_comp/components.hpp"
#include "base_pizza.hpp"
#include "Chicago_style.hpp"
#include "NY_style.hpp"
#include "Italian_style.hpp"

using namespace std;

TEST(PizzaElements, Sauce ) {
	Sauce* red = new Sauce("Red" , 1.00);
	Sauce* chunky_red = new Chunky_Red_Sauce();
	Sauce* italian_sa = new Italian_Sauce();
	Sauce* light_red = new Light_Red_Sauce();
	
	EXPECT_EQ(red -> get_type(), "Red");
	EXPECT_EQ(red -> get_price(), 1);
	EXPECT_EQ(chunky_red -> get_type(), "Chunky Red Sauce");
        EXPECT_EQ(chunky_red -> get_price(), 2);
	EXPECT_EQ(light_red -> get_type(), "Light Red Sauce");
        EXPECT_EQ(light_red -> get_price(), 1.50);
	EXPECT_EQ(italian_sa -> get_type(), "Italian Sauce");
        EXPECT_EQ(italian_sa -> get_price(), 1.50);

}


TEST(PizzaElements, Crust ) {
        Crust* regular = new Crust("Regular crust" , 2.00);
        Crust* deep_dish = new Deep_Dish();
        Crust* thick_cr = new Thick_Crust();
        Crust* thin_cr = new Thin_Crust();

        EXPECT_EQ(regular -> get_type(), "Regular crust");
        EXPECT_EQ(regular -> get_price(), 2);
        EXPECT_EQ(deep_dish -> get_type(), "Deep Dish");
        EXPECT_EQ(deep_dish -> get_price(), 4.5);
        EXPECT_EQ(thick_cr -> get_type(), "Thick Crust");
        EXPECT_EQ(thick_cr -> get_price(), 3.5);
        EXPECT_EQ(thin_cr -> get_type(), "Thin Crust");
        EXPECT_EQ(thin_cr -> get_price(), 3);

}

TEST(PizzaElements, Cheese ) {
        Cheese* chee = new Cheese("Regular Cheese" , 3.00);
        Cheese* mixed_ch = new Mixed_Cheese();
        Cheese* fatty_ch = new Fatty_Mozzarella_Cheese();
        Cheese* layered_ch = new Layered_Mozzarella_Cheese();

        EXPECT_EQ(chee -> get_type(), "Regular Cheese");
        EXPECT_EQ(chee -> get_price(), 3);
        EXPECT_EQ(mixed_ch -> get_type(), "Mixed Cheese");
        EXPECT_EQ(mixed_ch -> get_price(), 4.50);
        EXPECT_EQ(fatty_ch -> get_type(), "Fatty Mozzarella Cheese");
        EXPECT_EQ(fatty_ch -> get_price(), 3.50);
        EXPECT_EQ(layered_ch -> get_type(), "Layered Mozzarella Cheese");
        EXPECT_EQ(layered_ch -> get_price(), 5.50);

}

TEST(PizzaElements, NYStyle) {
	Pizza_Factory* NY = new NY_Style_Pizza;
	EXPECT_EQ(NY -> get_Crust() -> get_type(), "Thin Crust");
	EXPECT_EQ(NY -> get_Crust() -> get_price(), 3);
	EXPECT_EQ(NY -> get_Sauce() -> get_type(), "Light Red Sauce");
	EXPECT_EQ(NY -> get_Sauce() -> get_price(), 1.50);
	EXPECT_EQ(NY -> get_Cheese() -> get_type(), "Fatty Mozzarella Cheese");
	EXPECT_EQ(NY -> get_Cheese() -> get_price(), 3.50);

}

TEST(PizzaElements, ItalianStyle) {
	Pizza_Factory* Italian = new Italian_Style_Pizza;
	EXPECT_EQ(Italian -> get_Crust() -> get_type(), "Thick Crust");
	EXPECT_EQ(Italian -> get_Crust() -> get_price(), 3.5);
	EXPECT_EQ(Italian -> get_Sauce() -> get_type(), "Italian Sauce");
	EXPECT_EQ(Italian -> get_Sauce() -> get_price(), 1.50);
	EXPECT_EQ(Italian -> get_Cheese() -> get_type(), "Mixed Cheese");
	EXPECT_EQ(Italian -> get_Cheese() -> get_price(), 4.50);

}

TEST(PizzaElements, ChicagoStyle) {
	Pizza_Factory* Chicago = new Chicago_Style_Pizza;
	EXPECT_EQ(Chicago -> get_Crust() -> get_type(), "Deep Dish");
	EXPECT_EQ(Chicago -> get_Crust() -> get_price(), 4.5);
	EXPECT_EQ(Chicago -> get_Sauce() -> get_type(), "Chunky Red Sauce");
	EXPECT_EQ(Chicago -> get_Sauce() -> get_price(), 2);
	EXPECT_EQ(Chicago -> get_Cheese() -> get_type(), "Layered Mozzarella Cheese");
	EXPECT_EQ(Chicago -> get_Cheese() -> get_price(), 5.50);

}

TEST(PizzaElements, TotalNY){
	Pizza_Factory* NY = new NY_Style_Pizza;
	Base_Pizza* Pizza = NY -> get_pizza();
	
	
	
	cout << "Expect values of NY style to be: " << endl;
	
	cout <<"NY crust: " << NY -> get_Crust() -> get_type() << endl;
	cout <<"NY cheese: " << NY -> get_Cheese() -> get_type() << endl;
	cout <<"NY sauce: " << NY -> get_Sauce() -> get_type() << endl;
	
	cout <<"NY crust price: " << NY -> get_Crust() -> get_price() << endl;
	cout <<"NY cheese price: " << NY -> get_Cheese() -> get_price() << endl;
	cout <<"NY sauce price: " << NY -> get_Sauce() -> get_price() << endl;
	
	cout << endl << "Actual Values" << endl;
	Pizza -> test_details();


}

TEST(PizzaElements, TotalChicago){
	Pizza_Factory* Chicago = new Chicago_Style_Pizza;
	Base_Pizza* Pizza = Chicago -> get_pizza();
	
	
	
	cout << "Expect values of NY style to be: " << endl;
	
	cout <<"NY crust: " << Chicago -> get_Crust() -> get_type() << endl;
	cout <<"NY cheese: " << Chicago -> get_Cheese() -> get_type() << endl;
	cout <<"NY sauce: " << Chicago -> get_Sauce() -> get_type() << endl;
	
	cout <<"NY crust price: " << Chicago -> get_Crust() -> get_price() << endl;
	cout <<"NY cheese price: " << Chicago -> get_Cheese() -> get_price() << endl;
	cout <<"NY sauce price: " << Chicago -> get_Sauce() -> get_price() << endl;
	
	cout << endl << "Actual Values" << endl;
	Pizza -> test_details();


}

TEST(PizzaElements, TotalItalian){
	Pizza_Factory* Italian = new Italian_Style_Pizza;
	Base_Pizza* Pizza = Italian -> get_pizza();
	
	
	
	cout << "Expect values of NY style to be: " << endl;
	
	cout <<"NY crust: " << Italian -> get_Crust() -> get_type() << endl;
	cout <<"NY cheese: " << Italian -> get_Cheese() -> get_type() << endl;
	cout <<"NY sauce: " << Italian -> get_Sauce() -> get_type() << endl;
	
	cout <<"NY crust price: " << Italian -> get_Crust() -> get_price() << endl;
	cout <<"NY cheese price: " << Italian -> get_Cheese() -> get_price() << endl;
	cout <<"NY sauce price: " << Italian -> get_Sauce() -> get_price() << endl;
	
	cout << endl << "Actual Values" << endl;
	Pizza -> test_details();


}


