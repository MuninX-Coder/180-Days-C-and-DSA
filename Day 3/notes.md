# notes
 Operators in C++ (Beginner-Friendly)

---

### 1️⃣ Arithmetic Operators

These are **basic math operators**.
They let you **add, subtract, multiply, divide,** or find the **remainder**.

Example:

```cpp
int a = 10;
int b = 3;
int sum = a + b;   // adds a and b -> 13
int diff = a - b;  // subtracts b from a -> 7
int prod = a * b;  // multiplies -> 30
int quot = a / b;  // integer division -> 3
int rem = a % b;   // remainder -> 1
```

* `+` → addition
* `-` → subtraction
* `*` → multiplication
* `/` → division
* `%` → remainder

---

### 2️⃣ Relational Operators

These **compare two values** and give you **true (1)** or **false (0)**.

Example:

```cpp
int x = 5;
int y = 10;
cout << (x == y);  // checks if x is equal to y -> 0 (false)
cout << (x != y);  // checks if x is not equal to y -> 1 (true)
cout << (x < y);   // checks if x is less than y -> 1 (true)
cout << (x > y);   // checks if x is greater than y -> 0 (false)
cout << (x <= y);  // checks if x is less than or equal to y -> 1
cout << (x >= y);  // checks if x is greater than or equal to y -> 0
```

* `==` → equal to
* `!=` → not equal to
* `<` → less than
* `>` → greater than
* `<=` → less than or equal
* `>=` → greater than or equal

---

### 3️⃣ Logical Operators

These combine **multiple conditions** and return **true (1)** or **false (0)**.

Example:

```cpp
int a = 5;
int b = 10;
cout << (a > 0 && b > 0);  // true because both are positive
cout << (a > 0 || b < 0);  // true because a > 0
cout << !(a > 0);          // false because a > 0 is true, ! flips it to false
```

* `&&` → logical AND → true only if **both** are true
* `||` → logical OR → true if **at least one** is true
* `!` → logical NOT → flips true to false, false to true

---

### 4️⃣ Assignment Operators

These **change the value** of a variable directly.

Example:

```cpp
int a = 10;
a += 5;  // same as a = a + 5 → 15
a -= 3;  // a = a - 3 → 12
a *= 2;  // a = a * 2 → 24
a /= 4;  // a = a / 4 → 6
a %= 2;  // a = a % 2 → 0
```

* `=` → assigns a value
* `+=` → adds and assigns
* `-=` → subtracts and assigns
* `*=` → multiplies and assigns
* `/=` → divides and assigns
* `%=` → remainder and assigns

---

### 5️⃣ Increment and Decrement Operators

They **increase or decrease** a variable by 1.
There are **two types**:

✅ **Prefix**: First change the value, then use it
✅ **Postfix**: First use the value, then change it

Example:

```cpp
int a = 5;

cout << ++a;  // prefix increment: a becomes 6, then prints 6
cout << a++;  // postfix increment: prints 6, then a becomes 7

cout << --a;  // prefix decrement: a becomes 6, then prints 6
cout << a--;  // postfix decrement: prints 6, then a becomes 5
```

* `++a` → prefix increment
* `a++` → postfix increment
* `--a` → prefix decrement
* `a--` → postfix decrement

---

### ✏️ Final Tips

* **Use `cin`** to take input from the user:

  ```cpp
  int x;
  cout << "Enter a number: ";
  cin >> x;
  ```
* **Use `cout`** to display output:

  ```cpp
  cout << "The value is: " << x << endl;
  ```
* **Always end statements with `;`** (semicolon).


