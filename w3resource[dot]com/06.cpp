// Write a C++ program to find the largest element of a given array of integers.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 12, 4, 5, 80, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    
    for (int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "Largest element is: " << largest;
    
    return 0;
}