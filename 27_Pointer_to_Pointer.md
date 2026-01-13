
---

# 📌 Pointer to Pointer in C (Multiple Levels)

## 📖 Overview

In C programming, a pointer can store the address of another pointer. This concept is known as a **pointer to pointer**. By extending this idea, we can create multiple levels of pointers that ultimately refer to the same variable.

This program demonstrates how **multi-level pointers** work and how dereferencing retrieves the original value.

---

## 🔹 What is a Pointer to Pointer?

* A pointer that stores the **address of another pointer** is called a *pointer to pointer*.
* Each additional `*` represents one more level of indirection.
* Multi-level pointers are commonly used in:

  * Dynamic memory allocation
  * Passing pointers to functions
  * Handling complex data structures

---

## 🔹 Variable and Pointer Chain

| Level | Variable | Description                   |
| ----- | -------- | ----------------------------- |
| Data  | `No`     | Integer variable              |
| 1     | `p`      | Pointer to `No`               |
| 2     | `q`      | Pointer to pointer (`p`)      |
| 3     | `r`      | Pointer to pointer to pointer |
| 4     | `s`      | Four-level pointer            |
| 5     | `t`      | Five-level pointer            |
| 6     | `u`      | Six-level pointer             |
| 7     | `v`      | Seven-level pointer           |

All pointers ultimately reference the same integer variable `No`.

---

## 🔹 Source Code

```c
/*
• Pointer to pointer:
We can create a pointer which can hold the address of another pointer.
*/

#include <stdio.h>

int main()
{
    int No = 10;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;
    int ******u = &t;
    int *******v = &u;

    printf("%d\n", *******v);
    printf("%d\n", *u);
    printf("%d\n", &s);

    return 0;
}
```

---

## 🔹 Explanation of Output

### 1️⃣ Accessing the Original Value

```c
printf("%d\n", *******v);
```

* Dereferencing `v` seven times reaches the integer `No`.
* Output: `10`

---

### 2️⃣ Partial Dereferencing

```c
printf("%d\n", *u);
```

* `u` points to `t`.
* `*u` gives the address stored in `t`.
* The printed value represents a **memory address**, not the integer value.

---

### 3️⃣ Printing an Address

```c
printf("%d\n", &s);
```

* Prints the **memory address** of pointer `s`.

---

## 🔹 Key Points to Remember

* Each `*` adds one level of indirection.
* More dereferencing steps are required to reach the actual data.
* All pointer levels ultimately refer to the same variable.
* Pointer-to-pointer concepts are powerful but should be used carefully to maintain code readability.

---

## ✅ Conclusion

This program demonstrates:

* Creation of pointer-to-pointer variables
* Multi-level pointer chaining
* How dereferencing retrieves the original value
* How addresses propagate through pointer levels

Understanding pointer-to-pointer concepts is essential for mastering **advanced C programming**, especially when working with dynamic memory and complex data structures.

---

