#include <iostream>


int main() {

    setlocale(LC_ALL, "RU");
//Начало познания переменных
    int number = 67;

    std::cout << "SIXSEVEN:" << number << std::endl;

    int a;
    int b; //могу через ,
//переменные
    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;
    
    std::cout << "A: " << a << std::endl; 
    std:: cout << "B: " << b << std::endl;
// вычитание
    std::cout << "Widhtraw " << a-b << std::endl;

// типы данных

    short nim_1 = 7;

    unsigned int num_2 = 300000000; // unsigned убирает дробность и увеличивает в два положительное
    std::cout << num_2;

// дробные 

    float num_3 = 3.14f;
    //float == int
    double num_4 = 3.1418f;
    //double == long
//символы
    char symwol = 'q';
    std::cout << symwol << std::endl;

    bool isHAPPY = false;

    

    return 0;
}