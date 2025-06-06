# notes

✅ **1️⃣ Basic Data Types**
These are the types of data you can store in variables:

* **`int`**: whole numbers (e.g. 5, -10)
* **`char`**: single characters (e.g. `'A'`, `'9'`)
* **`bool`**: true or false (`true`, `false`)
* **`float`**: small decimal numbers (e.g. 3.14)
* **`double`**: bigger decimal numbers with more precision (e.g. 3.14159265)

💡 Example:

```cpp
int age = 21;         // whole number
char grade = 'B';     // single letter
bool isStudent = true; // true/false
float weight = 65.5;  // decimal number (less precise)
double pi = 3.1415;   // decimal (more precise)
```

---

✅ **2️⃣ Declaration and Initialization**

* **Declaration**: telling the computer about a variable (`int x;`)
* **Initialization**: giving it a value (`int x = 10;`)
* You can do both at once.

💡 Example:

```cpp
int number = 5;
char letter = 'A';
```

You can also declare multiple variables on one line:

```cpp
int a = 1, b = 2, c = 3;
```

---

✅ **3️⃣ `sizeof` Operator**
Tells you how many **bytes** of memory a data type takes.

💡 Example:

```cpp
cout << sizeof(int);   // usually prints 4
cout << sizeof(char);  // prints 1
```

---

✅ **4️⃣ Type Conversion (Type Casting)**
Sometimes you want to change a variable from one type to another.

👉 **Implicit conversion (automatic)**  in here there is heirarcy system
Happens when you mix types in an expression.

```cpp
int a = 5;
double b = 4.5;
double result = a + b;  // a is changed to double automatically
```

👉 **Explicit conversion (manual)**
You tell the computer to change the type.

```cpp
double pi = 3.14;
int newPi = int(pi); // manually converts double to int (cuts off decimals)
```

or

```cpp
int newPi = static_cast<int>(pi);
```

---

✅ **5️⃣ ASCII Values**
Characters are stored as numbers (ASCII codes).
For example, `'A'` is 65, `'B'` is 66.

💡 Example:

```cpp
char ch = 'A';
cout << int(ch);  // prints 65
```

---

✅ **6️⃣ Integer vs Floating Point Division**

* Integer division **removes** decimals.
* If you want decimals, you must use `float` or `double`.

💡 Example:

```cpp
int m = 10, n = 3;
cout << m / n; // prints 3 (no decimals)
cout << static_cast<float>(m) / n; // prints 3.33333
```

---

✅ **7️⃣ Precision Difference**

* `float` has about 6–7 decimal digits.
* `double` has about 15 decimal digits.
  Use `double` when you want more precise decimals.

---



