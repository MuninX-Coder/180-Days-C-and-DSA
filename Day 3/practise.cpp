#include <iostream>
using namespace std;

int main()
{

    // question 1. Write a program to add two integers and display the result.
    int a = 10, b = 20;
    cout << "after adding two integers: " << a + b << endl;

    // question 2. Write a program to find the remainder when one number is divided by another.
    cout << "remainder of 2 number a and b is: " << a % b << endl;

    // question 3. Write a program to check if a number is greater than 10 or not.
    cout << "is number greater than 10 or not: " << (b > 10) << endl;

    // question 4. Write a program to take two numbers as input and print which one is bigger.
    int num1, num2;
    cout << "enter first num1: " << endl;
    cin >> num1;

    cout << "enter sec num2: " << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Num 1 is greater then numb2: " << num1 << endl;
    }
    else
    {
        cout << "Num 2 is greater than num1: " << num2 << endl;
    }

    // question 5.  Write a program to check if two numbers are equal or not.
    if (num1 == num2)
    {
        cout << "yes num1 is equal to num2: " << num1 << "and numb2 is: " << num2 << endl;
    }

    // question 6. Write a program to read two integers and print true if both numbers are greater than 0, else print false.

    if (num1 && num2 > 0)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    // question 7.  Write a program to take an integer and increment it using prefix increment. Display the result.

    int increment;
    cout << "enter the value for increment: " << endl;
    cin >> increment;

    cout << "the first value before increment: " << increment << endl;

    int aftIncrement = ++increment;
    cout << "The value after increment : " << aftIncrement << endl;

    // question 8. Write a program to take an integer and increment it using postfix increment. Display the original and new values.

    int afterpostIncrement = aftIncrement++;
    cout << "The value after post increment: " << afterpostIncrement << endl;

    // question 9.  Write a program to take a number and decrement it using prefix decrement. Display the result.

    int decrement;
    cout << "enter the value for decreement: " << endl;
    cin >> decrement;

    cout << "the value before decrement: " << endl;

    int afterdec = --decrement;
    cout << "after decrement pre decrement: " << afterdec << endl;

    // question 10. Write a program to take a number and decrement it using postfix decrement. Display the original and new values.

    int postdec;
    cout << "enter the value for the post dec: " << endl;
    cin >> postdec;

    cout << "The value before any post decrement: " << postdec << endl;

    int aferpostdec = postdec--;
    cout << "current value because it will first give the vlaue then decrease 1 : " << aferpostdec << endl;

    cout << "the current value: " << postdec << endl;

    // question 11.Write a program to take two integers and use logical AND (&&) and OR (||) to check if both are even.

    int foreven;
    cout << "Enter the value 1 to check weather even or not: " << endl;
    cin >> foreven;
    int foreven1;
    cout << "Enter the value 2 to check weather even or not: " << endl;
    cin >> foreven1;

    // by using logical and "&&"
    if ((foreven % 2 == 0) && (foreven1 % 2 == 0))
    {
        cout << "This is a even number" << foreven << foreven1 << endl;
    }

    // by using logical or "||"
    if ((foreven % 2 == 0) || (foreven1 % 2 == 0))
    {
        cout << "atlest 1 number is even number" << endl;
    }

    // question 12. Write a program that assigns a value to a variable and then uses +=, -=, *=, /=, and %= on that variable. Display the final result.
    int assingvar = 50;

    assingvar += 5;
    cout << "using += operator: " << assingvar << endl;

    assingvar -= 5;
    cout << "using -= operator: " << assingvar << endl;

    assingvar *= 5;
    cout << "using *= operator: " << assingvar << endl;

    assingvar /= 2;
    cout << "using /= operator: " << assingvar << endl;

    assingvar %= 2;
    cout << "using %= operator: " << assingvar << endl;

    // question 13.  Write a program to multiply two integers and print the result.

    int mul1 = 50;
    int mul2 = 5;
    cout << "after multiplication: " << mul1 * mul2 << endl;

    // question 14.Write a program to check if a number is less than 100 and greater than 50.

    int check;
    cout << "enter the value to check the number: " << endl;
    cin >> check;
    if ((check < 100) && (check > 50))
    {
        cout << "Yes the number is under 100 and 50" << check << endl;
    }
    else
    {
        cout << "NO the number is not under 100 and 50" << check << endl;
    }

    // question 15.  Write a program that:
    // Starts with int a = 5;
    // Increments a using prefix increment
    // Decrements a using postfix decrement
    // Displays the final value of a

    int x = 5;
    cout << "Before any operation the current value: " << x << endl;

    // applying operation

    int y = ++x;
    cout << "after applying prefix increment: " << y << endl;

    int z = y--;
    cout << "The value of current z: " << z << endl;

    cout << "The current value after postfix decrement: " << y << endl;

    x = y;
    cout << "The final value: " << x << endl;
    return 0;
}