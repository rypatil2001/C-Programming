/*

  Storage Classes in C 
  
  Storage classes in C programming define four important properties of a variable or function:
  
  Scope – where the variable can be accessed
  
  Lifetime – how long the variable exists in memory
  
  Default value – initial value if not explicitly initialized
  
  Storage location – where the variable is stored




1) AUTO 

Default storage class for local variables
Scope: within the block
Lifetime: during function execution
Default value: garbage value
Stored in: stack memory


2) REGISTER

Same as auto but stored in CPU register (if available)
Scope: local to block
Lifetime: function execution
Faster access than memory variables
Address (&) cannot be used.


3. STATIC

Preserves value between function calls
Scope: local or global (depends on usage)
Lifetime: entire program execution
Default value: 0
Stored in: data segment

4. EXTERN

Used to access global variables defined in another file
Scope: global
Lifetime: entire program execution
Default value: 0


| Storage Class | Scope        | Lifetime       | Default Value |
| ------------- | ------------ | -------------- | ------------- |
| `auto`        | Local        | Block          | Garbage       |
| `register`    | Local        | Block          | Garbage       |
| `static`      | Local/Global | Entire program | 0             |
| `extern`      | Global       | Entire program | 0             |


Storage classes help control memory usage, variable visibility,
and performance in C programs, making code efficient, modular, and maintainable.



*/
