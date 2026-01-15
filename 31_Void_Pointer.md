
---

## 🔹 Void Pointer (Generic Pointer)

* A **void pointer (`void *`)** is called a **generic pointer**.
* It can store the **address of any data type** such as `char`, `int`, `float`, `double`, etc.
* A void pointer **cannot be dereferenced directly**.
* To access the value, **type casting is compulsory**.

---

## 🔹 Program Explanation (Step-by-Step)

### 1️⃣ Variable Declaration

```c
char ch = 'm';
int i = 10;
float f = 16.27;
double d = 98.986;
```

Each variable stores data of a different type at different memory locations.

---

### 2️⃣ Specific Pointers

```c
char *cp = &ch;
int *ip = &i;
float *fp = &f;
double *dp = &d;
```

* Each pointer can store **only its own data type address**
* Direct dereferencing is allowed (no casting needed)

---

### 3️⃣ Void Pointer Declaration

```c
void *vp = NULL;
```

* `vp` is a **generic pointer**
* It can store the address of **any data type**

---

### 4️⃣ Void Pointer Pointing to `char`

```c
vp = &ch;
printf("%c\n", *(char *)vp);
```

✔ `vp` stores address of `ch`
✔ Type cast to `char *`
✔ Output: `m`

---

### 5️⃣ Void Pointer Pointing to `int`

```c
vp = &i;
printf("%d\n", *(int *)vp);
```

✔ `vp` now stores address of `i`
✔ Type cast to `int *`
✔ Output: `10`

---

### 6️⃣ Void Pointer Pointing to `float`

```c
vp = &f;
printf("%f\n", *(float *)vp);
```

✔ `vp` stores address of `f`
✔ Type cast to `float *`
✔ Output: `16.270000`

---



👉 **Void pointer only knows the address, not the data type**
👉 **Type casting tells the compiler how to read the data**

---

## 🔹 Key Points (Very Important)

* Void pointer can store address of **any data type**
* Dereferencing **without type casting is not allowed**
* Type casting is **temporary**
* Used in:

  * `malloc()`
  * Generic functions
  * Data structures

---

## 🔹 One-Line Exam Answer 

> **Void pointer is a generic pointer that can store the address of any data type, but it must be type casted before dereferencing.**

---

