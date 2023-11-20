// Write a program in C++ to display the multiplication table vertically for an integer.

#include <iostream>
using namespace std;

void table(int n) {
    int result;
    
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;
    cout << "Table of: ";
    cin >> n;

    table(n);
}