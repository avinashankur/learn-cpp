#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for(int j = 1; j <= num / 2; j++) {
        if (num % j == 0) {
            sum = sum + j;
        }
    }

    return sum == num;
}

int main() {
    for (int i = 1; i <= 500; i++) {
        if(isPerfect(i)) {
            cout << i << " ";
        }
    }
}