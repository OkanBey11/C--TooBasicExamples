#include <iostream>
#include <vector>

int main(){
    // if , if else , else
    int score = 100;
    if (score > 90) {
        std::cout << "Perfect\n";
    } else if (score > 70) {
        std::cout << "Good\n";
    } else {
        std::cout << "You can be better\n";
    }

    // switch , case, default
    char grade = 'A';
    switch (grade) {
        case 'A':
            std::cout << "Perfect!\n";
            break;
        case 'B':
            std::cout << "Too Good\n";
            break;
        default:
            std::cout << "Nice Grade\n";
            break;
    }

    // one line if else
    bool is_logged_in = true;
    std::string message = (is_logged_in)? "Welcome!\n" : "Plase enter your password\n";

    // ----- 

    // for
    for (int i = 0; i < 5; i++) {
        std::cout << i << " "; // out: 0 1 2 3 4
    }
    std::cout << "\n";

    //while
    int count = 5;
    while (count > 0) {
        std::cout << count << " "; // out: 5 4 3 2 1
        count--;
    }   
    std::cout << "\n";

    // do while
    int input;
    do {
        std::cout << "Give me positive number : ";
        std::cin >> input;
    } while (input <= 0);
    std::cout << "\n";

    // range-based for
    std::vector<int> numbers = {1, 2, 3};
    for (auto num : numbers) {
        // 'num', 'numbers' of copy
        std::cout << num << " ";
    }
    std::cout << "\n";

    //By reference
    std::vector<int> numberss = {1, 2, 3};
    for (auto& num : numberss) {
        num *= 2;
    }
    //{2, 4, 6}
    std::cout << "\n";

    //By const reference
    std::vector<std::string> names = {"Alice", "Bob"};
    for (const auto& name : names) {
        std::cout << name << " ";
    }
    std::cout << "\n";

    return 0;
}