#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Ok programme is running" << endl;

    // 1️⃣ Write a program to display your name and age.
    string name;
    int age;
    cout << "enter your name: " << endl;
    cin >> name;
    cout << "enter your age: " << endl;
    cin >> age;
    cout << "Hello: " << name << endl;
    cout << "your age is: " << age << endl;

    // 2️⃣ Input two integers and display their sum, difference, product, and quotient.
    int integer1;
    int integer2;

    cout << "enter the first value: " << endl;
    cin >> integer1;
    cout << "enter the second value: " << endl;
    cin >> integer2;

    cout << "Addition: " << (integer1 + integer2) << endl;
    cout << "subtraction: " << (integer1 - integer2) << endl;
    cout << "Multiplication: " << (integer1 * integer2) << endl;
    cout << "Division: " << (integer1 / integer2) << endl;

    /*
    Write a complete C++ program that:
    ✅ Asks the user for their first name, last name, age, and height in centimeters.
    ✅ Stores this information in appropriate variables.
    ✅ Displays a summary of the data entered, with a clear format.
    */

    string firstname;
    string secondname;
    double HeightIN_centimeters;

    cout << "enter your first name: " << endl;
    cin >> firstname;

    cout << "enter your second name: " << endl;
    cin >> secondname;

    cout << "enter your height in centimeters: " << endl;
    cin >> HeightIN_centimeters;

    cout << setw(5) << left << "Name: " << setw(10) << right << firstname + secondname << endl;
    cout << setw(5) << left << "Height: " << setw(10) << right << HeightIN_centimeters << endl;

    /*
    Write a C++ program to calculate the total cost of items purchased in a mini shopping cart.

    ✅ Input:
     Price of the first item
     Quantity of the first item
     Price of the second item
    Quantity of the second item

    ✅ Calculate and display:
     Total cost of the first item
    Total cost of the second item
     Final total cost of both items
    */

    double FirstITEM_price;
    int firstitem_quantity;
    double TotalCOST_firstitem;

    double secondITEM_price;
    int secitem_quantity;
    double TotalCOST_seconditem;

    double final_price;

    cout << "enter the price of the first items: " << endl;
    cin >> FirstITEM_price;

    cout << "enter the quantity of the first item: " << endl;
    cin >> firstitem_quantity;

    TotalCOST_firstitem = FirstITEM_price * firstitem_quantity;

    cout << "Total price of the first item is: " << TotalCOST_firstitem << endl;

    cout << "enter the price of the second items: " << endl;
    cin >> secondITEM_price;

    cout << "enter the quantity of the second item: " << endl;
    cin >> secitem_quantity;

    TotalCOST_seconditem = secondITEM_price * secitem_quantity;

    cout << "Total price of the second item is: " << TotalCOST_seconditem << endl;

    final_price = TotalCOST_firstitem + TotalCOST_seconditem;

    cout << "Now the total price is: " << final_price << endl;


    return 0;
}