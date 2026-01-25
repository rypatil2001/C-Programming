
---

## Multi-Dimensional Array in C (Professional Explanation)

A **multi-dimensional array** in C is an **array of arrays**.

A **two-dimensional array** can be visualized as a table consisting of rows and columns.

### Example:

```c
int Arr[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12}
};
```

* `Arr` contains **3 rows**
* Each row is a **one-dimensional array of 4 integers**
* Total elements = `3 × 4 = 12`

### Memory Layout

All elements are stored in **contiguous memory locations** in **row-major order**.

---

##  Code for a deeper understanding

```c
#include <stdio.h>

int main()
{
    int Arr[3][4] = { 
        1, 2, 3, 4, 
        5, 6, 7, 8, 
        9, 10, 11, 12 
    };

    /* Address information */
    printf("Address of Arr           : %p\n", (void*)Arr);
    printf("Address of &Arr          : %p\n", (void*)&Arr);
    printf("Address of Arr[0][0]     : %p\n", (void*)&Arr[0][0]);
    printf("Address of Arr[1][0]     : %p\n", (void*)&Arr[1][0]);
    printf("Address of Arr[2][0]     : %p\n", (void*)&Arr[2][0]);

    printf("\nArray Elements:\n");

    printf("%d\n", Arr[0][0]); // 1
    printf("%d\n", Arr[0][1]); // 2
    printf("%d\n", Arr[0][2]); // 3
    printf("%d\n", Arr[0][3]); // 4

    printf("%d\n", Arr[1][0]); // 5
    printf("%d\n", Arr[1][1]); // 6
    printf("%d\n", Arr[1][2]); // 7
    printf("%d\n", Arr[1][3]); // 8

    printf("%d\n", Arr[2][0]); // 9
    printf("%d\n", Arr[2][1]); // 10
    printf("%d\n", Arr[2][2]); // 11
    printf("%d\n", Arr[2][3]); // 12

    return 0;
}
```

---

## Important Corrections Explained

### ✅ 1. Use `%p` for Addresses

* `%d` is **incorrect** for printing addresses
* `%p` must be used with `(void *)`

❌ Incorrect:

```c
printf("%d\n", Arr);
```

✅ Correct:

```c
printf("%p\n", (void*)Arr);
```

---

### ✅ 2. Difference Between `Arr` and `&Arr`

| Expression   | Meaning                                      |
| ------------ | -------------------------------------------- |
| `Arr`        | Pointer to first row (`int (*)[4]`)          |
| `&Arr`       | Pointer to entire 2D array (`int (*)[3][4]`) |
| `&Arr[0][0]` | Pointer to first integer                     |

Although `Arr` and `&Arr` may print the **same address**, their **types are different**.

---

### ✅ 3. Memory Increment Logic

Each row contains **4 integers**:

```
Arr[1][0] = Arr[0][0] + (4 × sizeof(int))
Arr[2][0] = Arr[1][0] + (4 × sizeof(int))
```

This confirms **row-major storage**.

---


