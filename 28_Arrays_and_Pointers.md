
---

# 📌 Array and Pointers in C

## 📖 Overview

In C, arrays and pointers are **closely related**. The name of an array represents the **base address** of the first element, and pointers can be used to access individual elements or even the entire array.

This program demonstrates:

* Pointers pointing to **individual array elements**
* A pointer pointing to the **entire array**
* How dereferencing behaves in each case

---

## 🔹 Array Declaration

```c
int Arr[] = {10, 20, 30, 40, 50};
```

* `Arr` is an integer array containing 5 elements.
* The elements are stored in **contiguous memory locations**.

---

## 🔹 Pointers to Array Elements

```c
int *aptr = &(Arr[0]);
int *bptr = &(Arr[1]);
int *cptr = &(Arr[2]);
int *dptr = &(Arr[3]);
int *eptr = &(Arr[4]);
```

* Each pointer stores the **address of a specific array element**.
* `aptr` points to the first element, `bptr` to the second, and so on.
* Dereferencing these pointers gives the **value of the element** they point to.

Example:

```c
*aptr  // gives 10
*bptr  // gives 20
```

---

## 🔹 Pointer to the Entire Array

```c
int (*ARRPTR)[5] = &Arr;
```

* `ARRPTR` is a **pointer to an array of 5 integers**.
* It stores the **address of the whole array**, not just a single element.
* This is different from `int *`, which points to individual elements.

---

## 🔹 Understanding the Output

### 1️⃣ Pointer to Array

```c
printf("%d\n", *ARRPTR);
```

* `*ARRPTR` represents the **base address of the array** (`&Arr[0]`).
* It prints the starting address of the array in memory.

```c
printf("%d\n", **ARRPTR);
```

* `**ARRPTR` accesses the **first element of the array**.
* Output: `10`

---

### 2️⃣ Accessing First Element

```c
printf("%d \n", Arr[0]);
printf("%d \n", *aptr);
printf("%d \n", aptr);
```

* `Arr[0]` prints the value of the first element.
* `*aptr` also prints the value of the first element.
* `aptr` prints the **address** of the first element.

---

### 3️⃣ Accessing Second Element

```c
printf("%d \n", Arr[1]);
printf("%d \n", *bptr);
printf("%d \n", bptr);
```

* `Arr[1]` and `*bptr` both print `20`.
* `bptr` prints the **address of the second element**.

---

## 🔹 Key Differences

| Expression    | Meaning                         |
| ------------- | ------------------------------- |
| `Arr`         | Base address of the array       |
| `Arr[i]`      | Value at index `i`              |
| `&Arr[i]`     | Address of element at index `i` |
| `int *`       | Pointer to an array element     |
| `int (*p)[5]` | Pointer to the entire array     |

---

## ✅ Conclusion

This program clearly shows:

* How pointers can point to **array elements**
* How a pointer can point to the **whole array**
* The difference between element pointers and array pointers
* How dereferencing works in both cases

Understanding this relationship between arrays and pointers is essential for **efficient C programming and memory handling**.

---


