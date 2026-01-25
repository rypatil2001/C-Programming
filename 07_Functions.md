

---

# 📘 Functions in C – README

## 1. What is a Function?

A **function** in C is a block of code that performs a **specific task**.
Functions help in **code reusability**, **modularity**, and **better readability**.

👉 Instead of writing the same logic again and again, we write it once inside a function and call it whenever needed.

---

## 2. Why Use Functions?

* Reduces code duplication
* Improves program readability
* Makes debugging easier
* Supports modular programming
* Simplifies large programs

---

## 3. Types of Functions in C

### 1️⃣ Library Functions

Predefined functions provided by C libraries.

Examples:

* `printf()`
* `scanf()`
* `strlen()`
* `sqrt()`

Header file example:

```c
#include <stdio.h>
#include <string.h>
```

---

### 2️⃣ User-Defined Functions

Functions written by the programmer.

Example:

```c
int Addition(int a, int b)
{
    return a + b;
}
```

---

## 4. Parts of a Function

### 1️⃣ Function Declaration (Prototype)

Tells the compiler about the function’s name, return type, and parameters.

```c
int Addition(int, int);
```

---

### 2️⃣ Function Definition

Contains the actual logic of the function.

```c
int Addition(int a, int b)
{
    int sum = a + b;
    return sum;
}
```

---

### 3️⃣ Function Call

Used to execute the function.

```c
int result = Addition(10, 20);
```

---

## 5. Syntax of a Function

```c
return_type function_name(parameter_list)
{
    // function body
}
```

---

## 6. Types of Functions Based on Arguments & Return Value

### 1️⃣ No Arguments, No Return Value

```c
void Display()
{
    printf("Hello World");
}
```

---

### 2️⃣ Arguments, No Return Value

```c
void Display(int No)
{
    printf("%d", No);
}
```

---

### 3️⃣ No Arguments, Return Value

```c
int GetNumber()
{
    return 10;
}
```

---

### 4️⃣ Arguments and Return Value

```c
int Addition(int a, int b)
{
    return a + b;
}
```

---

## 7. main() Function

* Execution of every C program **starts from `main()`**
* It is a user-defined function
* Only one `main()` function is allowed in a program

Example:

```c
int main()
{
    int Ans = Addition(10, 20);
    printf("%d", Ans);
    return 0;
}
```

---

## 8. Advantages of Functions

* Code reusability
* Easy maintenance
* Better program structure
* Faster development

---

## 9. Conclusion

Functions are one of the **most important building blocks** of C programming.
They make programs **modular, readable, and efficient**, and are heavily used in **real-world applications**.

---

