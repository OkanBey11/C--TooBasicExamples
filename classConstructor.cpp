#include <iostream>

class Cafe
{
public:
    std::string product;
    std::string whatTypeProduct;
    double price;
    void order(std::string x, std::string y, double z);
};

void Cafe::order(std::string x, std::string y, double z)
{
    product = x;
    whatTypeProduct = y;
    price = z;
}


int main(){
    Cafe order1, order2, order3;
    order1.order("Coffe", "Espresso", 2.25);
    order2.order("Doner", "without onion", 3.50);
    order3.order("Cake", "Chotlate Cake", 5.00);

    std::cout << order1.product << " "
    << order1.whatTypeProduct << " "
    << order1.price << "\n";

    std::cout << order2.product << " "
    << order2.whatTypeProduct << " "
    << order2.price << "\n";

    std::cout << order3.product << " "
    << order3.whatTypeProduct << " "
    << order3.price << "\n";
}

