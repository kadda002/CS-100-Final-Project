#ifndef __PIZZA_FACTORY_HPP__
#define __PIZZA_FACTORY_HPP__

#include <string>
using namespace std;

class Chicago_Style_Pizza;
class Italian_Style_Pizza;
class NY_Style_Pizza;

class Pizza_Factory {
        private:
                Base_Pizza *pizza;

        public:
                //Functions
                virtual Crust* get_Crust() = 0;
                virtual Sauce* get_Sauce() = 0;
                virtual Cheese* get_Cheese() = 0;
                virtual Base_Pizza* get_pizza() = 0;
};

#endif  // __PIZZA_FACTORY_HPP__

