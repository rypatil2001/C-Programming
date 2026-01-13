

---

# 📌 Pointers in C – Multiple Data Types

## 📖 Overview

This program demonstrates the use of **pointers in C** with different primitive data types. It explains how pointers store addresses, how dereferencing works, and how pointer size differs from the size of the data being pointed to.

---

## 🔹 Purpose of the Program

The objective of this program is to:

* Declare variables of different primitive data types
* Create pointers corresponding to each data type
* Access values using dereferencing
* Display memory addresses
* Understand the size of pointers and pointed data

---

## 🔹 Variables and Pointers Used

| Data Type | Variable | Pointer |
| --------- | -------- | ------- |
| `int`     | `No`     | `iptr`  |
| `char`    | `ch`     | `cptr`  |
| `double`  | `d`      | `dptr`  |

Each pointer stores the **address of its respective variable**.

---

## 🔹 Source Code

```c
/*
• Pointers
*/

#include <stdio.h>

int main()
{
    int No = 10;
    int *iptr = &No;

    char ch = 'A';
    char *cptr = &ch;

    double d = 789.98;
    double *dptr = &d;

    printf("%d \n", No);
    printf("%c \n", ch);
    printf("%.3f \n\n", d);

    printf("%d \n", *iptr);
    printf("%c \n", *cptr);
    printf("%f \n\n", *dptr);

    printf("%d \n", &No);
    printf("%d \n", &ch);
    printf("%d \n\n", &d);

    printf("%d \n", &iptr);
    printf("%d \n", &cptr);
    printf("%d \n", &dptr);

    printf("%d\n", sizeof(iptr));
    printf("%d\n", sizeof(cptr));
    printf("%d\n", sizeof(dptr));

    printf("%d\n", sizeof(*iptr)); // 4
    printf("%d\n", sizeof(*cptr)); // 1
    printf("%d\n", sizeof(*dptr)); // 8

    return 0;
}
```

---

## 🔹 Explanation of Output

### 1️⃣ Printing Variable Values

```c
printf("%d \n", No);
printf("%c \n", ch);
printf("%.3f \n", d);
```

* Prints the **actual values** stored in the variables.

---

### 2️⃣ Dereferencing Pointers

```c
printf("%d \n", *iptr);
printf("%c \n", *cptr);
printf("%f \n", *dptr);
```

* Dereferencing (`*`) fetches the **value stored at the address** held by the pointer.
* Output matches the original variable values.

---

### 3️⃣ Printing Addresses of Variables

```c
printf("%d \n", &No);
printf("%d \n", &ch);
printf("%d \n", &d);
```

* Displays the **memory addresses** of the variables.

---

### 4️⃣ Printing Addresses of Pointers

```c
printf("%d \n", &iptr);
printf("%d \n", &cptr);
printf("%d \n", &dptr);
```

* Prints the **addresses of the pointer variables themselves**.

---

### 5️⃣ Size of Pointers

```c
sizeof(iptr)
sizeof(cptr)
sizeof(dptr)
```

* All pointers occupy the **same size** in memory.
* On a 64-bit system, this is typically **8 bytes**.

---

### 6️⃣ Size of Data Pointed To

```c
sizeof(*iptr)  // 4 bytes (int)
sizeof(*cptr)  // 1 byte  (char)
sizeof(*dptr)  // 8 bytes (double)
```

* Shows that pointer size is independent of the data type.
* The size depends on the **type being dereferenced**.

---

## 📌 Key Observations

* Pointer size remains constant across data types.
* Dereferencing returns the actual value stored at the address.
* `sizeof(pointer)` ≠ `sizeof(*pointer)`

---

## ✅ Conclusion

This program clearly illustrates:

* Pointer declaration and initialization
* Dereferencing pointers
* Difference between variable address and pointer address
* Memory size comparison between pointers and data types

Understanding these fundamentals is essential for effective **C programming and memory management**.

---


