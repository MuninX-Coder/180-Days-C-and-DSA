#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    cout << "Your age is: " << age << endl;

    int a = 453;
    int b = 3245;
    cout << setw(34) << a << endl; // setw is used to give proper width and help us to give proper column for our text and numbers

    cout << setw(10) << "Munin" << setw(15) << age << endl;
    cout << setw(10) << "Ravi" << setw(15) << 34 << endl;
    cout << setw(10) << "gaurab" << setw(15) << 23 << endl;

    double pi = 3.14345234234;
    cout << "noraml pi value: " << pi << endl;
    cout << "using setprecision: " << setprecision(3) << pi << endl; // setprecision is used to define how many decimal place value should be disply


    string Fullname;
    cout <<"enter your full name";
    getline(cin,Fullname);

    cout << "Your full name is: " << Fullname << endl;
    return 0;
}