#include <iostream>
using namespace std;

int main() {

    float num1, num2, res;
    cout << "enter num1: ";
    cin >> num1;

    cout << "enter num2: ";
    cin >> num2;

    char math;
    cout << "enter math: ";
    cin >> math;


    if(math == '+')
        res == num1 + num2;
    else if (math == '-')
        res = num1 - num2;
    else if (math == '/')
        res = num1 / num2;
    else if (math == '*')
        res = num1 * num2;
    
    cout << res;
    
    
    // циклы
    for(int u = 100; u < 1000; u++)
        cout << u << endl;
    

    // int j = 0;
    // while (j < 10) {
    //     cout << j << endl;
    //     j++;
    // }
    
    return 0;
}