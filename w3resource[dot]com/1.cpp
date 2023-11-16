#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    std::cout << "Original array:";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    std::cout << "Sum of all even and odd numbers: " << evenSum << "," << oddSum << std::endl;

    return 0;
}
