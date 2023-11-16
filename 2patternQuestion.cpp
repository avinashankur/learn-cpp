#include <iostream>
using namespace std;

// int main()
// {

//     int row, column;
//     cout << "Row: ";
//     cin >> row;
//     cout << "Column: ";
//     cin >> column;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= column; j++)
//         {
//             if (i == 1 || i == row)
//             {
//                 cout << "*";
//             } else if (j == 1 || j == column) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }
// }

int main()
{

    int columns;
    cout << "Columns: ";
    cin >> columns;

    for (int i = columns; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}