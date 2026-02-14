/*
"Program to Demonstrate Structure Definition, Object Creation, and Member Access in C"
*/

#include <stdio.h>


//   Structure Definition:

struct Demo
{
    int i;      // Integer variable
    float f;    // Floating-point variable
    int j;      // Integer variable
};

int main()
{
 
 //       Creating structure variables (objects)

    struct Demo obj1;
    struct Demo obj2;
    
 
  
    printf("%d\n", sizeof(obj1));

    
// Dot (.) operator is used to access structure members
   
    obj1.i = 11;
    obj1.f = 90.9;
    obj1.j = 21;

    
//    Assigning values to members of obj2
//    obj2 is independent of obj1
 
    obj2.i = 51;
    obj2.f = 78.78;
    obj2.j = 99;
     
    printf("%d\n", obj1.i);  // Output: 11
    printf("%d\n", obj2.i);  // Output: 51
    
    return 0;   
}


/*



### 📦 Structure Layout (`struct Demo`)

```
struct Demo
+-------------------+
| i  (int)   | 4 B  |
+-------------------+
| f  (float) | 4 B  |
+-------------------+
| j  (int)   | 4 B  |
+-------------------+
Total Size = 12 Bytes   (may vary due to padding)
```

---

### 🧠 Memory Representation of Objects

#### 🔹 `obj1`

```
obj1
+-------------------+
| i = 11            |
+-------------------+
| f = 90.9          |
+-------------------+
| j = 21            |
+-------------------+
```

#### 🔹 `obj2`

```
obj2
+-------------------+
| i = 51            |
+-------------------+
| f = 78.78         |
+-------------------+
| j = 99            |
+-------------------+
```

---

### 🖨 Output Mapping

```
printf("%d\n", obj1.i);  → 11
printf("%d\n", obj2.i);  → 51
```

---

*/















