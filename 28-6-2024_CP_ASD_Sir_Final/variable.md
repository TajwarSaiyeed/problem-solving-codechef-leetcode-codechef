# Local varaiable and global variable

## Local variable

A variable that is declared inside a function or block is called a local variable. It is only accessible within the function or block in which it is declared. The scope of a local variable is limited to the function or block in which it is declared. Local variables are created when the function or block is entered and destroyed when the function or block is exited.

Here is an example of a local variable:

```c
#include <stdio.h>

void display() {
    int x = 10; // Local variable
    printf("The value of x is %d\n", x);
}

int main() {
    display();
    return 0;
}
```

## Global variable

A variable that is declared outside all functions and blocks is called a global variable. It is accessible from any part of the program. The scope of a global variable is the entire program, and it exists throughout the execution of the program.

Here is an example of a global variable:

```c
#include <stdio.h>

int x = 10; // Global variable

void display() {
    printf("The value of x is %d\n", x);
}

int main() {
    display();
    return 0;
}
```
