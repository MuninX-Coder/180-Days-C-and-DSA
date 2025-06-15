
### 🔹 Basic Syntax:

```cpp
if (condition1) {
    // Code runs if condition1 is true
}
else if (condition2) {
    // Runs if condition1 is false AND condition2 is true
}
else {
    // Runs if all above conditions are false
}
```

---

### 🔹 Flow:

* `if` → checks the first condition.
* `else if` → checked only if `if` is false.
* `else` → runs if none of the above are true.
* **Only one block** runs (the first one that's true).

---

### 🔹 Operators Used:

* `==` → equal to
* `!=` → not equal to
* `<`, `>`, `<=`, `>=` → comparisons
* `&&` → AND
* `||` → OR

---

### 🔹 Example:

```cpp
int age = 45;

if (age < 13) {
    cout << "Child";
}
else if (age >= 13 && age < 60) {
    cout << "Adult";
}
else {
    cout << "Senior";
}
```

---

### 🔹 Important Rules:

* Conditions must be **inside parentheses** `( )`.
* Blocks must be inside **curly braces** `{ }`.
* Once one condition is true, the rest are **skipped**.
* Avoid using `=` (assignment) instead of `==` (comparison).

---

### ✅ Common Use Cases:

* Age-based decisions (voting, tickets)
* Grading systems
* Divisibility checks
* Login systems
* Range and limit checks

