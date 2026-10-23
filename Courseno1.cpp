#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Hello world" << std::endl;
    std::cout << "Я женя";

    return 0;
}