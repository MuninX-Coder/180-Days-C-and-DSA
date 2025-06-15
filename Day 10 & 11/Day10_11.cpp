#include <iostream>
using namespace std;

int main(){
    int age;             // declaring a variable named as age
    cout << "enter your age: " << endl;
    cin >> age;   // taking the input from the user

    if (age >= 18)  // checking the condition,   is age is greater or equal to 18, if true run this block of code
    {
        cout << "you can drive: " << age << endl;
    } else{
        cout << "you are under 18 and you cant drive: " << age << endl;
    }
    
    return 0;
}