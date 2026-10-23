#include <iostream>
using namespace std;

int main() {
    long matrixx[3][2] = { 
        {3, 5},
        {5, 8},
        {-20, 10}
    };
    // cout << matrixx[1][1];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixx[i][j] << endl;
        }
    }
    
    return 0;
}