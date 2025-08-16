#include <iostream>
#include <bitset>

int main(){
    //Arithmetic
    int a = 50;
    int b = 25;
    std :: cout << "a : 50\nb : 25\n";
    std :: cout << "a + b = " << a + b << "\n";
    std :: cout << "a - b = " << a - b << "\n";
    std :: cout << "a * b = " << a * b << "\n";
    std :: cout << "a / b = " << a / b << "\n";
    std :: cout << "a % b = " << a % b << "\n";

    //Assignment
    std :: cout << "a = b \n" << "\na : " << a << "\nb : " << b;

    //To compare
    std :: cout << "a == b = " << (a == b) << "\n";
    std :: cout << "a != b = " << (a != b) << "\n";
    std :: cout << "a > b = " << (a > b) << "\n";
    std :: cout << "a < b = " << (a < b) << "\n";
    std :: cout << "a <= b = " << (a <= b) << "\n";
    std :: cout << "a >= b = " << (a >= b) << "\n";

    //Logical
    std :: cout << "true && true : " << (true && true) << "\n";
    std :: cout << "true && false : " << (true && false) << "\n";
    std :: cout << "false && false : " << (false && false) << "\n";
    std :: cout << "true || true : " << (true || true) << "\n";
    std :: cout << "true || false : " << (true || false) << "\n";
    std :: cout << "false || false : " << (false || false) << "\n";
    std :: cout << "!true : " << (!true) << "\n";
    std :: cout << "!false : " << (!false) << "\n";
    
    //Bitwise
    std::bitset<4> x { 0b1100 };
    std::bitset<4> y { 0b0110 };

    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000
    std::cout << (x & y) << '\n'; // and
    std::cout << (x | y) << '\n'; // or
    std::cout << (x ^ y) << '\n'; // xor

    // Compound Assignment
    // +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=.

    return 0; 
}