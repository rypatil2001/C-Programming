
---

# 📌 Pointers in C – README



Pointers are one of the most powerful and fundamental concepts in the C programming language. They allow programs to directly access and manipulate memory, making them essential for efficient programming, dynamic memory management, and data structures.

---

## 🔹 What is a Pointer?

* A **pointer** is a derived data type in **C and C++**.
* A pointer stores the **memory address** of another variable instead of storing the actual data.
* Java does **not** support pointers directly; instead, it uses **references**.
* Multiple pointers can point to the **same memory location**.
* Pointers enable advanced programming techniques such as:

  * Dynamic memory allocation
  * Efficient array handling
  * Function call optimization
  * Data structure implementation

---

## 🔹 Pointer Declaration and Reading

```c
int No = 11;
int *p = &No;
```

* `No` is an integer variable.
* `p` is a pointer to an integer.
* `p` stores the **address of `No`**.

---

## 🔹 Pointer Size

* A pointer always stores an address.
* On most **64-bit systems**, the size of a pointer is **8 bytes**.
* On **32-bit systems**, the size of a pointer is **4 bytes**.
* Pointer size depends on:

  * Computer architecture (16-bit / 32-bit / 64-bit)
  * Operating system
  * Compiler (e.g., MinGW)

---

## 🔹 Operators Used with Pointers

| Operator | Description                                                     |
| -------- | --------------------------------------------------------------- |
| `&`      | Address-of operator – gives the memory address of a variable    |
| `*`      | Dereference operator – accesses the value stored at the address |

---

## 🔹 Types of Pointers (Historical Concept)

> ⚠️ **Note:** These pointer types existed in older operating systems and are **not used in modern systems**.

### 1. Near Pointer

* Points to memory between **0 KB – 640 KB**

### 2. Far Pointer

* Points to memory between **640 KB – 1024 KB**

### 3. Huge Pointer

* Points to memory **above 1024 KB**

---

## 🔹 Example Program

```c
#include <stdio.h>

int main()
{
    int A = 10;
    int *iptr = &A;

    printf("%d\n", iptr);         // Address of A
    printf("%d\n", &A);           // Address of A
    printf("%d\n", *iptr);        // Value stored in A
    printf("%d\n", A);            // Value of A
    printf("%d\n", &iptr);        // Address of iptr
    printf("%d\n", sizeof(iptr)); // Size of pointer

    return 0;
}
```

---

## 🔹 Explanation of Output

* `iptr` and `&A` print the **same address**, as `iptr` points to `A`.
* `*iptr` and `A` print the **same value**.
* `&iptr` prints the **address of the pointer itself**.
* `sizeof(iptr)` prints the **size of the pointer**, not the size of the data it points to.

---

## 📌 Conclusion

This program demonstrates:

* Pointer declaration and initialization
* Address access using `&`
* Value access using `*`
* Memory size of a pointer

Understanding pointers is essential for mastering **C programming**, as they form the backbone of efficient and low-level system programming.

---


