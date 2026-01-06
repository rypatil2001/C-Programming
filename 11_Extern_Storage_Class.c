/*

Extern Storage Class (C)

extern is used with global variables to access them across multiple source files.
Global variables have extern as their default storage class.
The extern keyword does not allocate memory; it only declares a variable defined elsewhere.
Memory for global variables is allocated once, at the point of definition.
All global variables are stored in the data segment of memory.
Data Segment Parts
BSS: Uninitialized global variables (initialized to zero).
Data Segment: Initialized global variables.
*/


// This variable should be declared in saperate file
/* FILE1.c */
int globalVar = 10;   // Definition



/* FILE2.c */
extern int globalVar; // Declaration

void display()
{
    printf("%d\n", globalVar);
}


/*

| Property              | Extern Storage Class                  |
| --------------------- | ------------------------------------- |
| **Scope**             | Global (entire program, across files) |
| **Lifetime**          | Entire program execution              |
| **Default Value**     | 0 (if not initialized)                |
| **Memory Location**   | Data segment (BSS / Initialized Data) |
| **Initialization**    | At definition only                    |
| **Access**            | Accessible from multiple source files |
| **Memory Allocation** | Happens once (at definition)          |
| **Keyword Used**      | `extern`                              |
| **Applicable To**     | Global variables only                 |


*/
