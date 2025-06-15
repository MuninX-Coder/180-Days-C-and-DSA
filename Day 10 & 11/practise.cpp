#include <iostream>
using namespace std;

int main()
{
    // question 1. Check if a number is even or odd.
    int number;
    cout << "enter your number: " << endl;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "This is a even number: " << number << endl;
    }
    else
    {
        cout << "This is not an even number: " << number << endl;
    }

    // question 2. Determine if a number is positive, negative, or zero.

    if (number > 0)
    {
        cout << "This is a positive number: " << number << endl;
    }
    else if (number < 0)
    {
        cout << "This is a negitive number: " << number << endl;
    }
    else
    {
        cout << "This is number '0': " << number << endl;
    }

    // question 3. Find the maximum between two numbers.

    int num1, num2, maximumOf_two;
    cout << "enter the value of num1: " << endl;
    cin >> num1;

    cout << "enter the value of num2: " << endl;
    cin >> num2;
    maximumOf_two = max(num1, num2);

    cout << "The maximum of two number is: " << maximumOf_two << endl;

    // question 4. Find the maximum among three numbers.

 
    return 0;
}