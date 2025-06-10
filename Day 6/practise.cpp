#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // 1️⃣ Write a program to display “Hello, World!”.
    cout << "Hello, world" << endl;

    // 2️⃣ Take an integer input from the user and display it.
    int enter;
    cout << "Enter the integers to disply" << endl;
    cin >> enter;
    cout << "your entered value is: " << enter << endl;

    // 3️⃣ Add two numbers entered by the user.
    int num1, num2;
    cout << "Enter num1:" << endl;
    cin >> num1;
    cout << "Enter num2:" << endl;
    cin >> num2;
    cout << "addition: " << (num1 + num2) << endl;

    // 4️⃣ Subtract two numbers entered by the user.
    cout << "subtraction: " << (num1 - num2) << endl;

    // 5️⃣ Multiply two numbers entered by the user.
    cout << "Multiplication: " << (num1 * num2) << endl;

    // 6️⃣ Divide two numbers entered by the user and display the quotient.
    cout << "Division: " << (num1 / num2) << endl;

    // 7️⃣ Find the remainder when dividing two numbers.
    cout << "Remainder: " << (num1 % num2) << endl;

    // 8️⃣ Swap two numbers using a third variable.
    int a = 10;
    int b = 5;
    int c;
    cout << "Before swaping\n " << "value of a: " << a << "\nvalue of b: " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "After swaping\n"
         << "Value of a: " << a << "\nValue of b: " << b << endl;

    // 9️⃣ Swap two numbers without using a third variable.

    int a1 = 10;
    int b1 = 5;

    cout << "Before swaping\n"
         << "value of a1: " << a1 << "\nvalue of b1: " << b1 << endl;

    a1 = a1 - b1;
    b1 = a1 + b1;
    cout << "after swaping\n"
         << "value of a1: " << a1 << "\nvalue of b1: " << b1 << endl;

    // 🔟 Calculate the square and cube of a number.

    int calculateSquareandCube;
    cout << "enter the value to find the cube and square: " << endl;
    cin >> calculateSquareandCube;

    cout << "The cube fo this numer is: " << (calculateSquareandCube * calculateSquareandCube) << endl;
    cout << "The square fo this numer is: " << (calculateSquareandCube * calculateSquareandCube * calculateSquareandCube) << endl;

    // 1️⃣1️⃣ Calculate the area of a rectangle.

    double area, length, width;
    cout << "enter the length fo the rectangel: " << endl;
    cin >> length;

    cout << "enter the width of the rectangle: " << endl;
    cin >> width;

    cout << "Now the area of the reactangle is: " << (area = length * width) << endl;

    // 1️⃣2️⃣ Calculate the area of a circle (use 3.14 as π).
    double areaa, pi, radius;

    pi = 3.14159265359;

    cout << "enter radius of the circle is: " << endl;
    cin >> radius;

    cout << "area of the circle is: " << (areaa = pi * (radius * radius)) << endl;

    // 1️⃣3️⃣ Calculate the perimeter of a rectangle.

    int perimeter;
    cout << "The perimeter of the rectangle is: " << (perimeter = 2 * (length + width)) << endl;

    // 1️⃣4️⃣ Calculate the circumference of a circle. C = πd
    int circumference, diameter;
    cout << "enter the diameter: " << endl;
    cin >> diameter;
    cout << "The cincumerence of the circle is: " << (circumference = pi * diameter) << endl;

    // 1️⃣5️⃣ Take a character input and display its ASCII value.
    char character;
    cout << "Enter the character: " << endl;
    cin >> character;

    cout << "The ascii value is: " << static_cast<int>(character) << endl;

    // 1️⃣6️⃣ Convert Celsius to Fahrenheit.   F = (C * 9/5) + 32.
    double celcuius, fahrenheit;
    cout << "enter the value of celcuius:  " << endl;
    cin >> celcuius;
    fahrenheit = (celcuius * 9 / 5) + 32;
    cout << "after converting celsius of fahrenheit is: " << fahrenheit << endl;

    // 1️⃣7️⃣ Convert Fahrenheit to Celsius.  C = (F - 32) * 5/9.
    double celcuiss, fahrenheitt;
    cout << "enter the value of faherenheitt" << endl;
    cin >> fahrenheitt;
    celcuiss = (fahrenheitt - 32) * 5 / 9;
    cout << "after convering fahernheit to celcuiss: " << celcuiss << endl;

    // 1️⃣8️⃣ Check if a number is even or odd.
    int check_number;
    cout << "enter the value of the number to check even or odd: " << endl;
    cin >> check_number;

    if (check_number % 2 == 0)
    {
        cout << "congrats this is an even number: " << check_number << endl;
    }
    else
    {
        cout << "ok its an odd number: " << check_number << endl;
    }

    // 1️⃣9️⃣ Check if a number is positive or negative.

    if (check_number > 0)
    {
        cout << "yes this is a postitive number: " << check_number << endl;
    }
    else
    {
        cout << "no this is not a positive number: " << check_number << endl;
    }

    // 2️⃣0️⃣ Find the maximum of two numbers.
    int maximum_number;

    maximum_number = max(num1, num2);
    cout << "The maximum of this two number\n"
         << "Number 1: " << num1 << "\nNumber 2: " << num2 << "\nis: " << maximum_number << endl;

    // 2️⃣1️⃣ Find the minimum of two numbers.

    int minimum_number;
    minimum_number = min(num1, num2);
    cout << "The minimum of this two number\n"
         << "Number 1: " << num1 << "\nNumber 2: " << num2 << "\nIS: " << minimum_number << endl;

         // 
    return 0;
}