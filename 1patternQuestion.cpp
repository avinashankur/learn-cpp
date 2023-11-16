#include <iostream>
#include <cmath>
using namespace std;

// A code that repeats something on the x-axis and y-axis from user input

/*

int main() {

    int row, column;
    cout << "Row: ";
    cin >> row;
    cout << "Column: ";
    cin >> column;

    for (int i=1; i<= row; i++) {
        for (int j = 1; j <= column; j++) {
            cout << "avinash ";
        }
        cout << endl;
    }

}


*/

// A code that writes something multiple times in column only.

int main()
{
    char choice;

    do
    {
        string str; // to store text entered by user
        int repeat; // to store the number of repetition

        cout << "What the fuck do you want to repeat huh? ";
        getline(cin, str);
        cout << "Number of repetition: ";
        cin >> repeat;
        // cin.ignore();

        for (int i = 1; i <= repeat; i++)
        {
            cout << str;
            cout << endl;
        }

        cout << "Do you wanna do that again?(y/n)";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    return 0;
}