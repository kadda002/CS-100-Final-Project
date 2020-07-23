# CS-100-Final-Project

Group member names and email
B. Title of project
C. What app do you plan to work on?
D. Why is it important and interesting?
E. What language/tools/technology you plan to use?
F. What will be the input/output of your project?


Pizza Preparation Palooza

Group members:
Mahdi Aouchiche    email: maouc001@ucr.edu
Krishna Addanki    email: kadda002@ucr.edu
Zachary Hill        email: zhill003@ucr.edu

   Our project will be focused on coding a machine designed to construct pizzas based on user selection. 
   Customers can select the type of size and toppings on the pizza while the cheese and sauces will already 
   be set based on the type of pizza the user chooses to start with. The interesting factor of this 
   application is the technological advancements in different types of industries and the creation of different 
   types of experiences that consumers have in how they order food and how consumers customize them. All the 
   selections for pizzas mentioned above as well as payment options will count as the inputs asked by the user 
   (which cannot be changed unless the user starts over) while the full description of the food and it’s cost for 
   each selection will be the output.

   The code for the project will be in C++ using Linux as the source for typing all code and sending them to Github 
   where all our classes can be merged. Mahdi will be focusing on Composite Design Patterns, Krishna will use Abstract 
   Factory Design Patterns, and Zach is going to implement Decorator Design Patterns.

   Abstract Factory Design:
      The Abstract Factory class is designed to allow the user to select the type of pizza like chicago, NY, and Italian.  This the selected fractory returns a pizza object which contains the crust, sauce, and cheese information. The visitor would also be able to get the prices. The user would get a prompt to select the base pizza and then the constructor selects the correct factory and outputs the pizza to be decorated.
   
   Decorator Design:
      The Decorator class is primarily focused on adding the toppings to the base pizza chosen by the user. We have twelve classes each containing a different topping(2 sea foods, 3 meats, and 7 veggies) which can be added to a pizza multiple times but the name is only called once. Each group of toppings has its own set price that will be added to the total cost, in addition to the base pizza price, even if the users asks for extras of the same topping.
   
   Visitor Design:
      The Visitor class is designed to get the price, the base pizza style and the type of toppings added to the basic pizza by having an accept function in each of the concrete classes, it passes the visitor and gets the necessary data for each the 2 types of the vistors
   
   
