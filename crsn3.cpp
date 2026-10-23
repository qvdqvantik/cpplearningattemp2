#include <iostream>
#include <random>

int main() {

    short a;
    short b;

    std::cout << "INPUT A: ";
    std::cin >> a;

    std::cout << "Input B: ";
    std::cin >> b;

    std::cout << a-b;

    if(a > b) {
        std::cout << " YOU BICH ";
        if(a == b) {
            std::cout << "nice";
        }
    }
    else {
        std::cout << "you daun";
    }

    return(0);
}