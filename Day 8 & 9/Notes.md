
---

# Notes

## ✅ **1. if, else if, else**

* Used to make decisions based on conditions.
* Only one block runs depending on which condition is true.

```cpp
if (condition) {
    // runs if true
} else if (another condition) {
    // runs if first is false, but this is true
} else {
    // runs if none of the above are true
}
```

**Example:**

```cpp
if (num > 0) cout << "Positive";
else if (num < 0) cout << "Negative";
else cout << "Zero";
```

---

## 🔄 **2. switch Statement**

* Best for checking one variable with many fixed values (like menu options).
* Works only with `int`, `char`, or `enum`.
* Don't forget `break;` after each `case`.

```cpp
switch (value) {
    case 1: // code; break;
    case 2: // code; break;
    default: // runs if no match
}
```

---

## 🔁 **3. while Loop**

* Repeats a block **while** a condition is true.
* Might never run if the condition is false from the start.

```cpp
int i = 1;
while (i <= 5) {
    cout << i;
    i++;
}
```

---

## 🔁 **4. do...while Loop**

* Similar to `while`, **but runs at least once**.
* Checks the condition **after** running the loop body.

```cpp
int num;
do {
    cin >> num;
} while (num != 0);
```

* Remember: semicolon `;` after `while(...)` is required!

---

## 🔁 **5. for Loop**

* Best when you **know how many times** you want to loop.
* All loop parts (start, condition, update) are in one line.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i;
}
```

