#include <iostream>

class Animal
{
public:
    std::string species = "Cat";
    void honk(std::string s){
        std::cout << s << " \n";
    }
};

class Dog : public Animal{
    public:
        std::string kind;
};

int main(){
    Animal cat;
    cat.honk("Miaw !");
    cat.species = "Cat";
    std::cout << cat.species << "\n";

    Dog littleDog;
    littleDog.honk("Haw Haw !!");
    littleDog.species = "Dog";
    littleDog.kind = "Kangal";
    std::cout << littleDog.kind << " " << littleDog.species << "\n";
}
