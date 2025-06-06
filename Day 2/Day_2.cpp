#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // integres
    int a = 10; // this is a integres used for numbers like 1,3,4,5,6 etc.
    int b = 20;

    cout << "The sum of this 2 number a and b is:" << a + b << endl;

    // char          // char are used for single albhabet chracter
    char name = 'm';
    char title = 'b';

    cout << "name:" << name << "\ntitle:" << title << endl;

    // boolean             // boolean says weather it will be ture or false, ture =  1, false = 0

    bool isGood = true;
    bool isBad = false;

    cout << "is good:" << isGood << endl;
    cout << "is bad:" << isBad << endl;

    // float         // float is for number with decimal

    // float = for small decimal number
    // double = for little big decimal number
    // long double = for big decimal number

    float f = 3.14;
    double d = 3.23311;
    long double ld = 2344.3453;

    cout << "this is float" << f << endl;
    cout << "this is double:" << d << endl;
    cout << "this is long double:" << ld << endl;

    // sizeof operator             // this operator is used to return the size of the data types, basically how much space the data type will take in the memory

    cout << "size of int : " << sizeof(int) << " bytes" << endl;
    cout << "size of char : " << sizeof(char) << " bytes" << endl;
    cout << "size of bool : " << sizeof(bool) << " bytes" << endl;
    cout << "size of float : " << sizeof(float) << " bytes" << endl;
    cout << "size of double : " << sizeof(double) << " bytes" << endl;
    cout << "size of long double : " << sizeof(long double) << " bytes" << endl;
    cout << "size of string : " << sizeof(string) << " bytes" << endl;

    // type casing        // type casting is used to change the type of the data types
    double ThisisDouble = 3.14;
    int THISisint = (int)ThisisDouble; // in this line double is changed to int and then store to thisisint variable

    cout << "Double:" << ThisisDouble << endl;
    cout << "integers:" << THISisint << endl;

    // what is variable?
    // A variable is a container in memory that stores a value. You give it a name and data type.

    int age = 25;
    cout << "My age :" << age << endl;
    // int = data type
    // age = variable name
    // 25 = the value store in variable name

    // multiple declaration
    int ba = 1, bc = 2, c = 3;
    cout << "ba: " << ba << "\nbc: " << bc << "\nc: " << c << endl;


    // What is Type Conversion?
    // Type conversion (or type casting) is changing a variable from one type to another.


// Implicit Type Conversion (Automatic)
// Done automatically by C++ when assigning a value to a variable of a different type.

    // int to double
    int first = 34;
    double sec = first;
    cout << "after type conversion: " << sec <<  endl;
    cout << "type of the sec number: "<< typeid(sec).name() << endl;


    // double to int 
    double thisnumber = 3.2334;
    int tothisnumber = thisnumber;
    cout<< "after type conversion: " << tothisnumber << endl;

    // Explicit Type Conversion (Casting)
    //  Forcing conversion manually.  You tell C++: “I want to convert this to that type!”

     float expcas = 12.1234;
     int tothis = double(expcas);
      cout << "forcefully changing: "<< tothis << endl;


    return 0;
}
