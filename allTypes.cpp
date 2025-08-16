#include <iostream>

int main(){
    // All types in C++
    bool isAGoodBoy = true; // true, false
    std :: cout << isAGoodBoy << " : " << sizeof(isAGoodBoy) << " Byte" << "\n";
    
    char alphabet = 'A'; // -128 to 127
    std :: cout << alphabet << " : " << sizeof(alphabet) << " Byte" << "\n";

    unsigned char u_alphabet = 'A'; // 0 to 255
    std :: cout << u_alphabet << " : " << sizeof(u_alphabet) << " Byte" << "\n";

    short short_number = 5; // -32,768 to 32,767
    std :: cout << short_number << " : " << sizeof(short_number) << " Byte" << "\n";

    unsigned short u_short_number = 56535; // 	0 to 65,535
    std :: cout << u_short_number << " : " << sizeof(u_short_number) << " Byte" << "\n";

    int int_number = -21474836; // -2,147,483,648 to 2,147,483,647
    std :: cout << int_number << " : " << sizeof(int_number) << " Byte" << "\n";

    unsigned int u_int_number = 4294967295; // 0 to 4,294,967,295
    std :: cout << u_int_number << " : " << sizeof(u_int_number) << " Byte" << "\n";

    long long_number = 2147483644; //same int or then higher
    std :: cout << long_number << " : " << sizeof(long_number) << " Byte" << "\n";

    long long longlong_number = 9999999999; //-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    std :: cout << longlong_number << " : " << sizeof(longlong_number) << " Byte" << "\n";

    unsigned long long u_longlong_number = 9999999999999; //0 to 18,446,744,073,709,551,615
    std :: cout << u_longlong_number << " : " << sizeof(u_longlong_number) << " Byte" << "\n";

    float float_number = 21644.23423; //Single precision floating point
    std :: cout << float_number << " : " << sizeof(float_number) << " Byte" << "\n";
    
    double double_number = 2147644.345345; //Double precision floating point
    std :: cout << double_number << " : " << sizeof(double_number) << " Byte" << "\n";

    long double long_double = 2144.4564563; //High precision floating point
    std :: cout << long_double << " : " << sizeof(long_double) << " Byte" << "\n";
    return 0;
}