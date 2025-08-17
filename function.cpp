#include <iostream>

// decleration , tanımlama
int max(int num1, int num2){
    return ( num1 > num2 )? num1 : num2;
}

// call by value
void increment(int val){
    val++;
}

// call by pointer
void increment_ptr(int* val_ptr){
    if (val_ptr)
    {
        (*val_ptr)++;
    }
    
}

// call by reference
void increment_ref(int& val_ref){
    val_ref++;
}

// function overloading
void print(int i){
    std::cout << "Integer: " << i << std::endl;
}

void print(double d){
    std::cout << "Double: " << d << std::endl;
}

void print (const std::string& s){
    std::cout << "String: " << s << std::endl;
}


// invocation
int main(){
    int who_is_max = max(20, 10);
    std::cout << who_is_max << " is max number\n";

    int x = 5;
    increment(x);
    std::cout << "This is x with by value = " << x << "\n";

    x = 5;
    increment_ptr(&x);
    std::cout << "This is x with by pointer = " << x << "\n";

    x = 5;
    increment_ref(x);
    std::cout << "This is x with by reference = " << x << "\n";

    print(11);
    print(3.44);
    print("nako");
    
    return 0;
}