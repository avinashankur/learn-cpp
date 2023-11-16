#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// an usual array in c++
// string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

// string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
// cout << cars[0];
// Outputs Volvo

// Loop through an array
// int main() {
//     string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
//     for (int i = 0; i < 5; i++) {
//         cout << cars[i] << endl;
//     }
// }

// Loop through any array with index number
int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << endl;
    }
}

