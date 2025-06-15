#include <iostream>
using namespace std;

int main()
{
    // if, else if, else
    int YourNumber;
    cout << "enter your number: " << endl;
    cin >> YourNumber;

    if (YourNumber >= 18 && YourNumber <= 50)
    {
        cout << "oh you can drive " << YourNumber << endl;
    }
    else if (YourNumber >= 50)
    {
        cout << "you are an senior citizen you should have a driving license " << YourNumber << endl;
    }
    else
    {
        cout << "you are a kid no need to drive, go and drive your toys " << YourNumber << endl;
    }
    // switch statement
    int enterchoice;
    cout << "enter your number between 1 to 3 for choice" << endl;
    cin >> enterchoice;

    switch (enterchoice)
    {
    case 1:
        cout << "you choice 1 which is NEWS" << endl;
        break;

    case 2:
        cout << "you choice 2 which is GAMMING" << endl;
        break;

    case 3:
        cout << "you choice 3 which is CODING" << endl;
        break;
    }
    // while loop
    int i = 1; // first declare a variable from where we will start the loop

    while (i <= 100) // codition of the promgramme,    is i(1) is greater or equal to 100
    {
        cout << "Number: " << i << endl; // if the i is not greater than 100 then enter the loop
        i++;                             // now add 1 extra on i and it becomes 2 and then print it and again check it weather i is >= of 100 or not and keep doing this until condition in true
    }

    // do while loop            - runs the condition first and then check
    int number; // first initilize a variable names (number)

    do
    {
        cout << "enter your number: " << endl; // enter the number
        cin >> number;
        cout << "you enter number: " << number << endl;
    } while (number != 0); // condition   // until and unless condition is true it will ask user to enter number

    // for loops  - if else ka bhai bolsaktai, we use this when we know when to stop, in this case we stop when we reach 500
    for (int i = 1; i <= 500; i++) // first initilize the variable (int i = 1), then second condition (i <= 500) , then update i++
    {
        cout << "Number: " << i << endl; // print the number
    }

    return 0;
}