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

**Example:**
```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int sum = a + b;

    printf("Sum = %d", sum);
    return 0;
}
```
---
### 🔹 Selection (Decision Making)
- Used to choose different execution paths based on conditions.
---
 - `if`
  
```c
//The if statement executes a block of code only when the given condition is true

#include <stdio.h>

int main() {
    int x = 10;

    if (x > 0) {
        printf("x is a positive number");
    }

    return 0;
}


```
  
  - `if-else`

```c
// Executes different code blocks based on a condition

#include <stdio.h>

int main() {
    int x = -5;

    if (x > 0) {
        printf("Positive number");
    } else {
        printf("Negative number");
    }

    return 0;
}

```

  - `switch`

```c
// Selects and executes one case from multiple choices based on a given value

#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}

```
---
### 🔹 Iteration (Looping)
- Loops in C are used to repeatedly execute a block of code until a specified condition is met
  
-`for`

```c
//Used to repeat a block of code multiple times
// Used when the number of iterations is known in advance

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}
```


  
-`while`


```c
// Repeats a block of code while the given condition is true
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    return 0;
}

```


-`do-while`

```c
// Executes the loop body at least once and repeats while the condition is true

#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}

```
