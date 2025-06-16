#include <iostream>
using namespace std;

int main()
{
    // question 1. Take an integer input. Print "Even" if it's even, otherwise "Odd".
    int num;
    cout << "enter the value: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even " << num << endl;
    }
    else
    {
        cout << "odd " << num << endl;
    }

    // question 2. Input a number. Print "Positive", "Negative", or "Zero".

    if (num > 0)
    {
        cout << "positive: " << num << endl;
    }
    else if (num < 0)
    {
        cout << "negative: " << num << endl;
    }
    else
    {
        cout << "Zero: " << num << endl;
    }

    // question 3. Input a person's age. If they are 18 or older, print "Adult", otherwise "Minor".

    int age;
    cout << "enter your age: " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "adult: " << age << endl;
    }
    else
    {
        cout << "minor: " << age << endl;
    }

    // question 4. Input two numbers. Print the larger one.
    int num1, num2;
    cout << "enter the value for num 1" << endl;
    cin >> num1;

    cout << "enter the value for num 2" << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << "num 1 is larger one: " << num1 << endl;
    }
    else
    {
        cout << "num 2 is larger one: " << num2 << endl;
    }

    // question 5. Input two numbers. Print the smaller one.

    if (num1 < num2)
    {
        cout << "num 1 is the smallest: " << num1 << endl;
    }
    else
    {
        cout << "num 2 is the smallest: " << num2 << endl;
    }

    // question 6. Input three numbers. Print the greatest of them.
    int num3;
    cout << "enter the value of num 3: " << endl;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Num 1 is the greatest: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Num 2 is the greatest: " << num2 << endl;
    }
    else
    {
        cout << "Num 3 is the greatest: " << num3 << endl;
    }

    // question 7. Input a character. Print if it's a vowel or consonant.
    char letter;
    cout << "enter your letter" << endl;
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' ||
        letter == 'o' || letter == 'u' || letter == 'A' ||
        letter == 'E' || letter == 'I' || letter == 'O' ||
        letter == 'U')
    {
        cout << "Vowel: " << letter << endl;
    }
    else
    {
        cout << "Consonant: " << letter << endl;
    }

    // question 8. Input marks (0-100). Print grade:

    // >=90: A

    // >=75: B

    // >=50: C

    // <50: F

    int marks;
    cout << "enter your marks: " << endl;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "A " << marks << endl;
    }
    else if (marks >= 75 && marks <= 90)
    {
        cout << "B " << marks << endl;
    }
    else if (marks >= 50 && marks <= 75)
    {
        cout << "C " << marks << endl;
    }
    else if (marks < 50)
    {
        cout << "F " << marks << endl;
    }

    // question 9. Input a year. Print whether it's a leap year or not.
    
    return 0;
}