#include <iostream>
using namespace std;

long double factorial(int num) {
    long double fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long double result(int n, int r) {
    long double ans;
    ans = factorial(n)/(factorial(n-r) * factorial(r));
    return ans;
}

int main() {
   int n, r;
   cout << "Value of n: ";
   cin >> n;
   cout << "Value of r: ";
   cin >> r;

   cout << "Answer: " << result(n, r) << endl;
}