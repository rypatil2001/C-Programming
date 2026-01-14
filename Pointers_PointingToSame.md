
---

# 📌 Multiple Pointers Pointing to the Same Variable in C

## 📖 Overview

In the C programming language, **multiple pointers can point to the same memory location**. This means that different pointer variables can store the address of a single variable and access or modify its value.

 three different pointers reference the **same integer variable** and produce identical output when dereferenced.

---

## 🧠 Concept Explained

* A **pointer** is a variable that stores the **address of another variable**.
* When multiple pointers store the **same address**, they all refer to the **same data in memory**.
* Dereferencing any of these pointers gives access to the same value.
---

```

          ┌─────────────┐
          │   int No    │
          │   Value=15  │
          │ Address=100 │
          └─────────────┘
                 ▲
                 │
      ┌──────────┼──────────┐
      │          │          │
┌──────────┐ ┌──────────┐ ┌──────────┐
│ int *a   │ │ int *b   │ │ int *c   │
│ Value=100│ │ Value=100│ │ Value=100│
└──────────┘ └──────────┘ └──────────┘
```
---

## 🧪 Program Code

```c
#include <stdio.h>

int main()
{
    int No = 15;

    int *a = &No;
    int *b = &No;
    int *c = &No;

    printf("%d \n", No);
    printf("%d \n", *a);
    printf("%d \n", *b);
    printf("%d \n", *c);

    return 0;
}
```

---


```
Memory Address     Variable / Pointer     Value
-----------------------------------------------
0x100              No                     15
0x200              a                      0x100
0x204              b                      0x100
0x208              c                      0x100
```

✔️ All pointers (`a`, `b`, `c`) store the **same address** of variable `No`.

---

## 🖨️ Output

```
15
15
15
15
```

---



