# Programming Language Paradigms in C

## 📌 Overview
The **C programming language** primarily follows the **Procedural Programming Paradigm** and strongly supports **Structured Programming**.  
It also provides low-level features that make it suitable for **system programming**.

---

## 🧠 Programming Paradigms Supported by C

### 1️⃣ Procedural Programming Paradigm
C is fundamentally a **procedural language**, where programs are organized as a collection of functions (procedures).

**Key Characteristics:**
- Focus on step-by-step execution
- Functions are the main building blocks
- Data and functions are separate
- Emphasis on algorithmic logic

**Example:**
```c
#include <stdio.h>

void add(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    add(10, 20);
    return 0;
}


```

# Structured Programming and Paradigms in C

## 2️⃣ Structured Programming Paradigm

The **C programming language** supports **structured programming**, which helps improve:

- Code readability  
- Maintainability  
- Debugging efficiency  

Structured programming in C is based on **three fundamental control structures**.

---

### 🔹 Sequence
- Statements are executed **one after another** in a linear order.

---

### 🔹 Selection (Decision Making)
- Used to choose different execution paths based on conditions.
- Implemented using:
  - `if`
  - `if-else`
  - `switch`

**Example:**
```c
if (x > 0) {
    printf("Positive");
} else {
    printf("Negative");
}
