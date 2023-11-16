#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
// A reference variable is a "reference" to an existing variable, and it is created with the & operator

// int main()
// {
//     int a, b, c;
//     cout << "Jaldi number bharo: ";
//     cin >> a >> b >> c;

//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << "A is the greatest.";
//         }

//         else
//         {
//             cout << "B is the greatest.";
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << "B is the greatest.";
//         }

//         else
//         {
//             cout << "C is the greatest.";
//         }
//     }
// }

// iska shorter and easy to understand version:

// int main() {
//     int num1, num2, num3;

//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << "Enter the third number: ";
//     cin >> num3;

//     int maximum;

//     if (num1 >= num2 && num1 >= num3) {
//         maximum = num1;
//     } else if (num2 >= num1 && num2 >= num3) {
//         maximum = num2;
//     } else {
//         maximum = num3;
//     }

//     cout << "Maximum number: " << maximum << endl;

//     return 0;
// }

// this repeats the code in cmd
int main()
{
    char choice;

    do
    {

        int num1, num2, num3;
        int maximum;
        cout << "Jaldi number bharo: ";
        cin >> num1 >> num2 >> num3;

        if (num1 >= num2 && num1 >= num3)
        {
            maximum = num1;
        }
        else if (num2 >= num1 && num2 >= num3)
        {
            maximum = num2;
        }
        else
        {
            maximum = num3;
        }

        cout << "The maximum number is: " << maximum << endl;

        cout << "Do you want to repeat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

// int main() {
//     char choice;

//     do {
//         int num1, num2, num3;

//         cout << "Enter the first number: ";ṇ
//         cin >> num1;

//         cout << "Enter the second number: ";
//         cin >> num2;

//         cout << "Enter the third number: ";
//         cin >> num3;

//         int maximum;

//         if (num1 >= num2 && num1 >= num3) {
//             maximum = num1;
//         } else if (num2 >= num1 && num2 >= num3) {
//             maximum = num2;
//         } else {
//             maximum = num3;
//         }

//         cout << "Maximum number: " << maximum << endl;

//         cout << "Do you want to repeat? (y/n): ";
//         cin >> choice;
//     } while (choice == 'y' || choice == 'Y');

//     return 0;
// }
