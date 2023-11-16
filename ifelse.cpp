#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// simple if else statement in c++

// int main() {
//     int myAge = 17;
//     int voteAge = 18;

//     if (myAge >= voteAge) {
//         cout << "Yes. You can vote now!";
//     } else {
//         cout << "You are not eligible to vote.";
//     }
// }

// shorthand for if else statements (also known as ternary opertor) is:
// variable = (condition) ? expressionTrue : expressionFalse;
// eg:

// an usual if else statement
// int main()
// {
//     int time = 20;
//     if (time <= 17) {
//         cout << "It's still daytime";
//     } else {
//         cout << "It's already nighttime";
//     }
// }

// the shorthand for this if else statement can written as:
// int main() {
//     int time = 20;
//     string result = (time <= 17) ? "It's still daytime." : "It's already nighttime." ;
//     cout << result;
// }

// switch statements can be usen in the place of if else statements. The syntax is:

// int main() {
//     int num = 3;

//     switch (num) {
//         case 0 ... 4:
//             cout << "Number is less than or equal to 4.";
//             break;
//         case 5:
//             cout << "Number is 5.";
//             break;
//         case 6 ... 10:
//             cout << "Number is greater than 5 and less than or equal to 10.";
//             break;
//         default:
//             cout << "Number is not in the range 0-10.";
//             break;
//     }

//     return 0;
// }

// while loopp
// int main() {

//     int i = 0;
//     while (i < 5) {
//         cout << i << "\n";
//         i++;
//     }
// }

// do while loop
// int main() {
// do {
//   code block to be executed
// }
// while (condition);
// }

// for loop
// int main() {

    // for (int i = 0; i < 5; i++) {
        // cout << i << "\n";
    // }
// }

// 19 ka table using for loop
// int main () {
//     for (int i = 1; i <= 10; i++) {
//         cout << i * 19 << "\n";
//     }
// }

// 2 ka power with increment upto 10 using for loop
// int main() {
//     for (int i = 1; i <= 10; i++) {
//         cout << pow(2, i) <<endl;
//     }
// }

// i ki power 2 with increment in i upto 10
// int main() {
//     for(int i = 1; i <= 10; i++) {
//         cout << pow(i, 2) <<endl;
//     }
// }


// 119 ka table using for loop
// int main() {
//     for(int i = 1; i <= 10; i++) {
//         cout << i * 119 <<endl;
//     }
// }

// int main() {
//     for(int i = 1; i <= 10; i++ ) {
//         cout << i * 2 <<endl;
//     }
// }