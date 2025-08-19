#include <iostream>

// too basic class
class MyClass
{
public:
    int myNum;
    std::string myString;
};


int main()
{
   MyClass myObj; // object of class
   
   myObj.myNum = 15;
   myObj.myString = "Nako fast";

   //print values
   std::cout << myObj.myNum << "\n";
   std::cout << myObj.myString;
   return 0 ;
}