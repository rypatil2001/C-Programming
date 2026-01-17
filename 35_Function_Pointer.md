
---

# Function Pointer in C

## 📌 Overview

A **function pointer** is a pointer variable that stores the **address of a function**.
Using function pointers, we can call a function **indirectly**, just like calling it normally, but through a pointer.

This concept is widely used in:

* Callback functions
* Menu-driven programs
* Event handling
* Function tables

---

## 🧠 Definition

> **Function Pointer:**
> A function pointer is a pointer that holds the address of a function having a specific return type and parameter list.

---

## 🧾 Program Explanation

### Source Code

```c
#include <stdio.h>

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int value1 = 10, value2 = 20;
    int Ret = 0;

    int (*ptr)(int, int);
    ptr = Addition;

    Ret = ptr(value1, value2);

    printf("%d\n", Ret);

    return 0;
}
```

---

## 🔍 Step-by-Step Explanation

### 1️⃣ Function Definition

```c
int Addition(int No1, int No2)
```

* Accepts **two integer parameters**
* Returns an **integer result**
* Performs addition of two numbers

---

### 2️⃣ Function Pointer Declaration

```c
int (*ptr)(int, int);
```

This statement means:

* `ptr` is a **pointer to a function**
* The function:

  * Takes **two integers as arguments**
  * Returns an **integer**

📌 **Important:**
Parentheses `(*ptr)` are mandatory.
Without them, the declaration meaning changes.

---

### 3️⃣ Assigning Function Address

```c
ptr = Addition;
```

* The **function name itself represents the address** of the function
* No `&` operator is required
* Internally, the address comes from the **text (code) segment** of memory

---

### 4️⃣ Calling the Function Using Pointer

```c
Ret = ptr(value1, value2);
```

* Calls the `Addition` function indirectly
* Equivalent to:

```c
Ret = Addition(value1, value2);
```

---

### 5️⃣ Output

```c
printf("%d\n", Ret);
```

**Output:**

```
30
```

---

## 📌 Key Notes

* In C, **array names** and **function names** internally represent addresses.
* Function pointers allow **dynamic function calls**.
* The function pointer must exactly match:

  * Return type
  * Number of parameters
  * Parameter types

---

## 🧪 Memory Insight

* The function `Addition` is stored in the **text segment** of memory.
* The function pointer `ptr` stores the **starting address** of this function.
* When `ptr()` is called, execution jumps to that memory location.

---

## ✅ Advantages of Function Pointers

* Improves code flexibility
* Enables runtime decision-making
* Reduces duplicate code
* Essential for callbacks and modular programming

---

## 📘 Conclusion

Function pointers provide a powerful mechanism to call functions dynamically in C.
Understanding them is crucial for advanced C programming concepts such as callbacks, operating systems, and embedded systems.

---
