#include <iostream>
using namespace std;

int main()
{
    int Num;
    cout << "enter your number: " << endl;
    cin >> Num;

    switch (Num)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "friday";
        break;

    case 6:
        cout << "saturday";
        break;

    case 7:
        cout << "sunday";
        break;

    default:
        cout << "invalid number";
        break;
    }
}