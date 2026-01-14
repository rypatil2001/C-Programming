
---

# 📌 Pointer Arithmetic in C

## 📖 Introduction

**Pointer arithmetic** in C refers to performing arithmetic operations on pointer variables.
These operations allow pointers to move across memory locations in a controlled and type-safe manner.

Pointer arithmetic is **scaled automatically** by the size of the data type the pointer refers to.

---

## 🧠 Important Rule

When arithmetic is performed on a pointer, the compiler **automatically multiplies the offset** by the size of the data type.

```
pointer ± n  →  pointer ± (n × sizeof(data_type))
```

---

## ✅ Allowed Pointer Arithmetic Operations

### 1️⃣ Pointer Addition (`p + n`)

Moves the pointer **forward** by `n` elements.

Example:

```
p + 2
= p + (2 × sizeof(int))
= p + (2 × 4)
= p + 8 bytes
```

This means the pointer moves **two integer positions ahead** in memory.

---

### 2️⃣ Pointer Subtraction (`p - n`)

Moves the pointer **backward** by `n` elements.

Example:

```
q - 2
= q - (2 × sizeof(int))
= q - 8 bytes
```

---

### 3️⃣ Pointer Difference (`p - q`)

Gives the **number of elements** between two pointers pointing to the **same array**.

Example:

```
p - q
= (address(p) - address(q)) / sizeof(int)
= (112 - 104) / 4
= 2
```

✔ Result represents **element count**, not bytes.

---

### ❌ Invalid Operation

```
p + q   // NOT ALLOWED
```

Adding two pointers has **no logical meaning** and is prohibited by the C standard.

---

## 🧪 Program Code

```c
#include <stdio.h>

int main()
{
    int Arr[] = {10, 20, 30, 40, 50, 60};

    int *p = &(Arr[3]);   // Points to value 40
    int *q = &(Arr[0]);   // Points to value 10

    printf("%d\n", *(p + 2));   // Accesses Arr[5] → 60
    printf("%d\n", *(p - 2));   // Accesses Arr[1] → 20
    printf("%d\n", p - q);      // Distance in elements → 3

    return 0;
}
```




```
Index:   0    1    2    3    4    5
Value:  10   20   30   40   50   60
          ↑              ↑
          q              p
```

---

## 🖨️ Output

```
60
20
3
```

---

## 🔍 Key Observations

* Pointer arithmetic works **only within arrays**
* Arithmetic is scaled by `sizeof(data_type)`
* Pointer difference returns **element count**
* Adding two pointers is **illegal**

---

## ✅ Conclusion

Pointer arithmetic enables efficient traversal of arrays and memory blocks.
Only **addition, subtraction, and difference** operations are allowed, as they produce meaningful and valid results.

---


