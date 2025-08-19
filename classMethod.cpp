#include <iostream>

class MyClass {        
  public:              
    void myMethod() {  // Method/function defined inside the class
      std::cout << "Hello World!\n";
    }
};

class OtherClass
{
public:
    void otherMethod();
    int multiplication_2(int x);
};

void OtherClass::otherMethod()
{
    std::cout << "Outsider says \"Hello World!\"\n";
}

int OtherClass::multiplication_2(int x)
{
    return x*2;
}

int main(){

    MyClass myObj;
    myObj.myMethod();

    OtherClass otherObj;
    otherObj.otherMethod();

    std::cout << otherObj.multiplication_2(2);
}

