#include <iostream>
using namespace std;

int main()
{
    // quesiton 1. Declare an int variable age and initialize it to 21. Print its value.
    int age = 25;
    cout << "My age:" << age << endl;

    // question 2. Declare a char variable grade and store the letter 'B'. Print it.

    char letter = 'b';
    cout << "My letter: " << letter << endl;

    // question 3. Declare a float variable weight and initialize it to 65.5. Print its value.

    float weight = 65.5;
    cout << "My weight: " << weight << endl;

    // question 4. Declare a double variable pi and initialize it to 3.1415926535. Print it.

    double pi = 3.1415926535;
    cout << "pi value: " << pi << endl;

    // quesiton 5. Declare a bool variable isStudent and set it to true. Print it.

    bool isStudent = true;
    cout << "is student: " << isStudent << endl;

    // question 6. Declare three integer variables on the same line: x, y, z. Initialize them to 5, 10, and 15 respectively. Print them.

    int x = 5, y = 10, z = 15;
    cout << "value of x: " << x << "\nvalue of y: " << y << "\nvalue of z: " << z << endl;

    // question 7. Print the size (in bytes) of int, char, float, double, and bool using sizeof operator.

    cout << "size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of char: " << sizeof(char) << " bytes" << endl;
    cout << "size of float: " << sizeof(float) << " bytes" << endl;
    cout << "size of double: " << sizeof(double) << " bytes" << endl;
    cout << "size of bool: " << sizeof(bool) << " bytes" << endl;

    // quesiton 8. Declare a double variable salary with a value of 1200.75. Convert it to an int using explicit casting and print the result.

    double salary = 1200.75;
    int newSalary = int(salary);
    cout << "The new salary after converting is: " << newSalary << endl;

    // quesiton 9. Declare an int variable num with a value of 100. Convert it to a double using implicit conversion (no explicit cast) and print it.

    int num = 100;
    double newNum = num;
    cout << "after converting using implicit: " << newNum << endl;

    // question 10. Write a program that adds an int and a double together. Print the result. Show how the implicit type conversion happens.

    int first_number = 100;
    double sec_number = 34.4654;

    double afterAdd = first_number + sec_number;
    cout << "after conversion: " << afterAdd << endl;

    // question 11. Declare an int variable and initialize it to -15. Convert it to an unsigned int and print the result.

    unsigned int afterconver;
    afterconver = -15;
    cout << "after converting: " << afterconver << endl;

    // question 12. Declare a char variable letter with the value 'D'. Print its ASCII value using int(letter) conversion.

    char newlet = 'D';
    cout << "The asscii value of letter D is : " << int(newlet) << endl;

    // question 13. Declare a short variable a with value 32000 and a long variable b with value 2000000000. Print both values.

    short small_number = 32000;
    long large_number = 2000000000;
    cout << "This is short value: " << small_number << "\nThis is long value: " << large_number << endl;

    // question 14. Declare two int variables: m = 10 and n = 3.
    // Calculate the result of m / n as an integer division.
    // Calculate the result of m / n as a floating-point division using explicit casting.
    // Print both results.

    int m = 10, n = 3;

    int div = m / n;
    cout << "The result of m / n as an integer division:  " << div << endl;

    float newDIV = static_cast<float>(m) / n;
    cout << "The result of m /n as a floating point division is :" << newDIV << endl;

    // question 15. Declare a float variable temp with value 37.8 and a double variable preciseTemp with the same value. Print both to see the difference in precision.

    float temp = 37.8;
    double precisetemp = 37.8;

    cout << "value with float: " << temp << endl;
    cout << "value with dobule: " << precisetemp << endl;

    return 0;
}