# Notes


## 🌟 C++ Basics: A Detailed Guide

C++ is a powerful programming language widely used for developing software applications.
---

### 1️⃣ Basic Structure of a C++ Program

Let’s start with a simple program:

```cpp
#include <iostream>      // Preprocessor directive to include the standard I/O library

using namespace std;     // Brings all the names in the std namespace into scope

int main() {             // Main function - entry point of every C++ program
    cout << "Hello, world!";   // Prints "Hello, world!" to the screen
    return 0;            // Return 0 indicates that the program ended successfully
}
```

#### Line-by-line explanation:

✅ `#include <iostream>`
This line tells the compiler to include the header file **iostream** which contains functions for input and output (like `cin` and `cout`).

✅ `using namespace std;`
Instead of writing `std::cout`, we use this line so that we can just write `cout`. It brings everything from the standard namespace into the program.

✅ `int main() { ... }`
This is the main function. Every C++ program **must** have a `main()` function because execution starts here.

✅ Inside `main()`:

* `cout << "Hello, world!";`
  `cout` is used for output. The `<<` operator sends data to the output stream. This line prints the message.

* `return 0;`
  This tells the operating system that the program ran successfully.

---

### 2️⃣ Data Types and Variables

A **variable** is like a box that can hold data. C++ has different data types to hold different kinds of data:

| Data Type | Example Value | Description                      |
| --------- | ------------- | -------------------------------- |
| `int`     | 5             | Integer numbers (no decimals)    |
| `float`   | 5.99          | Floating-point (decimal) numbers |
| `double`  | 3.14159       | Double-precision floating-point  |
| `char`    | 'A'           | Single character                 |
| `bool`    | true / false  | Boolean, true or false values    |

#### Example program:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;           // Integer variable
    float height = 5.9;     // Float variable
    char grade = 'A';       // Character variable
    bool isStudent = true;  // Boolean variable

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is student: " << isStudent << endl;

    return 0;
}
```

**Explanation:**

* `int age = 20;` declares an integer variable named `age` and assigns it the value 20.
* `float height = 5.9;` declares a float variable.
* `char grade = 'A';` declares a character variable.
* `bool isStudent = true;` declares a Boolean variable.
* `cout` is used to **print** these values to the screen.

---

### 3️⃣ Operators in C++

Operators perform actions on variables and values. Here are some important operators:

✅ **Arithmetic operators:** `+`, `-`, `*`, `/`, `%`
✅ **Assignment operators:** `=`, `+=`, `-=`, `*=`, `/=`
✅ **Comparison operators:** `==`, `!=`, `<`, `>`, `<=`, `>=`
✅ **Logical operators:** `&&`, `||`, `!`

#### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Sum: " << a + b << endl;       // 15
    cout << "Difference: " << a - b << endl; // 5
    cout << "Product: " << a * b << endl;    // 50
    cout << "Quotient: " << a / b << endl;   // 2

    // Comparison
    cout << "Is a equal to b? " << (a == b) << endl;  // 0 (false)
    cout << "Is a greater than b? " << (a > b) << endl; // 1 (true)

    // Logical
    cout << "Both positive? " << (a > 0 && b > 0) << endl; // 1 (true)

    return 0;
}
```

---

### 4️⃣ Input and Output

✅ **Output with `cout`**
`cout` is used to print text or variables.

✅ **Input with `cin`**
`cin` reads input from the user.

#### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";  // Prompt user
    cin >> number;               // Store input in variable 'number'

    cout << "You entered: " << number << endl;

    return 0;
}
```

---

### 5️⃣ Comments in C++

Comments help you document your code and make it easier to understand.

✅ **Single-line comment:**

```cpp
// This is a single-line comment
```

✅ **Multi-line comment:**

```cpp
/*
This is a
multi-line comment.
*/
```

---

### 📝 Putting It All Together!

Let’s combine what we’ve learned in a small program:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;

    // Ask the user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate sum, difference, product, and quotient
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    // Output the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;  // Indicate successful execution
}
```

---

### 🔥 Key Takeaways

✅ Every C++ program **starts** with `#include <iostream>` and has a `main()` function.
✅ Variables **store data** of different types (`int`, `float`, `char`, etc.).
✅ `cout` is for output; `cin` is for input.
✅ **Operators** do the math and comparisons.
✅ Comments help you and others understand your code.
✅ Semicolons `;` **end statements**.


