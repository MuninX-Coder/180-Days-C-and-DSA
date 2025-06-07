#include <iostream>
using namespace std;

int main()
{
    // Arithimetic operator  = Basic mathametical task

    int a = 50;
    int b = 25;

    // addition '+'
    cout << "The sum of this 2 number is: " << a + b << endl; // we use + sign for addition

    // subtraction '-'
    cout << "The subtraction of this 2 number is: " << a - b << endl; // we use - sign for subtraction

    // Multiplication '*'
    cout << "The multiplication of this 2 number is: " << a * b << endl; // we use * sign for multiplication

    // Division '/'
    cout << "The division of this 2 number is: " << a / b << endl; // we use / sign for division

    // Moduelo  '%'
    cout << "The remainder of this 2 number is: " << a % b << endl; // we use % sign for module and we get the remainder




    // Relational operator = this operator are used to compare two variable and return true and false.

    // equal to "=="     // used to check weather both variable are same.
    cout << "Does a is equal to b: " << (a == b) << endl;

    // not equal to "!="    // used to check weather both are not same
    cout << "Does a is not equal ot b: " << (a != b) << endl;

    // greater than ">"  // used to check which vairable is big
    cout << "Does a is greater than b: " << (a > b) << endl;

    // less than "<"  // used to check which variable is small
    cout << "Does a is smaller than b: " << (a < b) << endl;

    // greater than or equal to ">="    // used to check weather variable is greater than or equal
    cout << "Does a is greater than or eqal to b: " << (a >= b) << endl;

    // less than or equal to "<="     /. used to check weather variable is less than or equal to
    cout << "Does a is less than or eqal to b: " << (a <= b) << endl;




    // logical operators = this operators is often used to check multiple conditions

    // Logical AND "&&"   // both condition must be true then only i will return true
    cout << "is a && b: " << (a && b) << endl;

    // logical or "||"   // if one condition is ture then it will give ture
    cout << "is a || b: " << (a || b) << endl;

    // logical NOT "!"   // true ko false, false ko ture
    cout << "is !a: " << (!a) << endl;




    // Assignment operators = This operators are used to assign values to operators

    // Simple assignment "="
    int c = 10; // in this line we create a integres variable name c and we assing value 10 by using "=" sing.

    // Add and assign "+="
    a += 5; // a = a + 5 ,  so we get 55.
    cout << "The value of a after assigning: " << a << endl;

    // Subtract and assign "-="
    b -= 5; // b = b - 5;, so we get 20.
    cout << "The value of b after assigning: " << b << endl;

    // Multiply and assign "*="
    a *= 2; // a = a * 2, so we get 55 * 2 = 110
    cout << "The value of a after assigning: " << a << endl;

    //  Divide and assign "/="
    a /= 2; // a = a / 2, so we get 110 / 2 = 55
    cout << "The value of a after assigning: " << a << endl;

    // Module and assing "%="
    a %= 2; // a = a % 2, so we get 55 % 2 =
    cout << "The value of a after assinging: " << a << endl;


    

    // increament and decrement operator = this operator increase and decrease the value of variable by 1

    // post incremetn "a++"
    cout << "after post increment: " << a++ << endl; // we get the value first then 1 is added

    // pre increment "++a"
    cout << " after pre increment: " << ++a << endl; // 1 is addeed then value is print
    cout << " new value: " << a << endl;

    // Post-decrement "a--"
    cout << "after post decrement: " << a-- << endl; // we get value first then 1 is decreased from the value

    // pre decrement "--a"
    cout << "after pre decrement: " << --a << endl; // 1 is decreased then value is print

    return 0;
}