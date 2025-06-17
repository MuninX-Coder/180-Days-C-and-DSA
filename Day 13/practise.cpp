#include <iostream>
using namespace std;

int main()
{

    // ✅ Problem 1: Calculator Menu
    // Ask the user to enter:
    // Two numbers (a and b)
    // A choice:
    // 1 → Add
    // 2 → Subtract
    // 3 → Multiply
    // 4 → Divide

    int num1, num2;
    cout << "enter the value for num 1" << endl;
    cin >> num1;

    cout << "enter the value for num 2 " << endl;
    cin >> num2;

    int choice;
    cout << "what do you want to perform.  1. add  2. sub   3. multiply  4.div  (enter 1 to 4)" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "addition: " << (num1 + num2) << endl;
        break;

    case 2:
        cout << "subtraction: " << (num1 - num2) << endl;
        break;

    case 3:
        cout << "Multiplication: " << (num1 * num2) << endl;
        break;

    case 4:
        cout << "Division: " << (num1 / num2) << endl;
        break;

    default:
        cout << "enter value from 1 to 4 only";
        break;
    }

    //    Problem 2: Grade Checker
    // Write a program that takes a character grade as input:
    // 'A', 'B', 'C' → Print "Passed"
    // 'D', 'E', 'F' → Print "Failed"
    // Any other input → Print "Invalid grade"
    // Use fall-through to group cases.

    char YourGrade;
    cout << "enter your grader in char (uppercase): " << endl;
    cin >> YourGrade;

    switch (YourGrade)
    {
    case 'A':
        cout << "";
    case 'B':
        cout << "";
    case 'c':
        cout << "";
        cout << "passed";
        break;
    case 'D':
        cout << "";

    case 'E':
        cout << "";

        cout << "failed";
        break;

    default:
        cout << "invalid value, enter grade from A to E";
        break;
    }

    // ✅ Problem 4: Vowel or Consonant
    // Ask the user to enter a lowercase letter. Check:
    // If the letter is a vowel (a, e, i, o, u), print "Vowel"
    // If it is any other letter, print "Consonant"
    // If it's not a letter, print "Invalid input"

    char letter;
    cout << "\nenter your char in lowercase: " << endl;
    cin >> letter;

    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "vowel";
        break;

    default:
        cout << "consonant";
        break;
    }

    //     ✅ Problem 5: Number of Days in a Month
    // Ask the user to enter a number (1 to 12) for the month. Print the number of days in that month (assume it's not a leap year).
    // Example:
    // 1 → January → 31 days
    // 2 → February → 28 days
    // 4, 6, 9, 11 → 30 days
    // Others → 31 days
    // Use switch, and group cases using fall-through

    int MonthNum;
    cout << "enter a number from 1 to 12:";
    cin >> MonthNum;

    switch (MonthNum)
    {
    case 1:
        cout << "January = 31 days";
        break;

    case 2:
        cout << "february = 28 days";
        break;

    case 3:
        cout << "March = 31 days";
        break;

    case 4:
        cout << "April = 30 days";
        break;

    case 5:
        cout << "May = 31 days";
        break;

    case 6:
        cout << "june = 30 days";
        break;
    case 7:
        cout << "july = 31 days";
        break;
    case 8:
        cout << "august = 31 days";
        break;
    case 9:
        cout << "september = 30 days";

        break;

    case 10:
        cout << "october = 31 days";
        break;

    case 11:
        cout << "November = 30 days";
        break;

    case 12:
        cout << "December = 31";
        break;

    default:

        cout << "invalid value,  enter number from 1 to 12";
        break;
    }
    return 0;
}
