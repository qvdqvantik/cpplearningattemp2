#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dist(1, 100);

    for (int i = 0; i < 10; i++) {
        std::cout << dist(gen) << " ";
    }

    return 0;
}