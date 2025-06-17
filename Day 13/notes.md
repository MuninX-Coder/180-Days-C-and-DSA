

## 📘 C++ Short Notes: `switch` Statement

### 🔹 What is a `switch`?

* A `switch` is used when you want to **check one variable against many constant values**.
* It's a cleaner alternative to writing multiple `if-else` statements.
* Works with `int`, `char`, and `enum` types (but **not** float, double, or string).

---

### 🔹 Basic Structure:

```cpp
switch (expression) {
    case value1:
        // do something
        break;
    case value2:
        // do something
        break;
    ...
    default:
        // runs if nothing matches
}
```

---

### 🔹 Key Components:

#### ✅ `case`

* Each `case` checks if it matches the value of the `expression`.
* Example:

  ```cpp
  case 3:
      cout << "Three";
  ```

#### ✅ `break`

* Tells the compiler to **exit the switch block** after a match.
* If you forget it, it will **continue running next cases** (fall-through).

#### ✅ `default`

* Optional.
* Runs when **no `case` matches**.
* Like the `else` in `if-else`.

---

### 🔹 ⚠️ Fall-through

* Happens when `break` is missing.
* C++ will keep executing all cases **below the matched one** until it finds a `break`.

Example:

```cpp
int x = 2;
switch (x) {
    case 1: cout << "One\n";
    case 2: cout << "Two\n";
    case 3: cout << "Three\n";
}
```

Output:

```
Two
Three
```

---

### 🔹 When to use switch?

* When you have a single variable to check against **many fixed choices**.
* Especially useful in menu-driven programs, calculators, day/month problems, etc.

---

### 🧠 Quick Tips:

* Always use `break` unless you really want a fall-through.
* Group cases smartly with fall-through to avoid repeating code.
* `default` is good for handling wrong or unexpected input.


