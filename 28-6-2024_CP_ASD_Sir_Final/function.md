### Types of functions

Functions in C programming can be broadly classified into two categories:

1. **Library functions**: These are functions that are already defined in the C standard library and can be directly used in a program without the need for additional implementation. Examples of library functions include `printf()`, `scanf()`, `strlen()`, etc.

2. **User-defined functions**: These are functions that are defined by the programmer to perform specific tasks within a program. User-defined functions provide modularity and reusability in a program by encapsulating a set of instructions into a single unit that can be called multiple times.

### Why do we need functions?

Functions are an essential part of programming for the following reasons:

1. **Modularity**: Functions allow you to break down a complex program into smaller, manageable units. Each function can perform a specific task, making the code easier to understand and maintain.

2. **Reusability**: Once a function is defined, it can be called multiple times from different parts of the program. This eliminates the need to rewrite the same code for similar tasks, improving code efficiency and reducing redundancy.

3. **Abstraction**: Functions provide a level of abstraction by hiding the implementation details of a task. This allows you to focus on the high-level logic of the program without getting bogged down in the low-level details.

4. **Code organization**: Functions help in organizing code by grouping related tasks together. This improves code readability and makes it easier to navigate and debug.

5. **Ease of testing**: Functions make it easier to test individual components of a program in isolation. This facilitates the debugging process and ensures that each function works correctly before integrating them into the complete program.

### Function declaration (prototype) vs function definition

- **Function declaration (prototype)**: A function declaration, also known as a function prototype, provides information about the function to the compiler. It includes the function's return type, name, and parameters (if any), but does not contain the actual implementation of the function. Function declarations are typically placed at the beginning of a program or in header files to inform the compiler about the functions that will be defined later in the program.

- **Function definition**: A function definition contains the actual implementation of the function, including the function body with the set of instructions to be executed. Function definitions define how a function behaves when called and specify the logic to be executed. Function definitions are written after the function declarations in the program.

### Local variable vs global variable

- **Local variable**: A local variable is a variable declared inside a function or block of code and is only accessible within that function or block. Local variables have local scope, meaning they exist only within the function or block where they are declared. Local variables are typically used to store temporary data or intermediate results that are needed for a specific task.

- **Global variable**: A global variable is a variable declared outside of any function or block of code and is accessible from any part of the program. Global variables have global scope, meaning they can be accessed and modified by any function in the program. Global variables are often used to store data that needs to be shared across multiple functions or modules.

### Character Input Output Functions

In C programming, character input/output functions are used to read and write individual characters to and from the standard input/output streams. Some commonly used character input/output functions include:

- `getchar()`: Reads a single character from the standard input stream (stdin).
- `putchar()`: Writes a single character to the standard output stream (stdout).
- `gets()`: Reads a line of text from the standard input stream (stdin).
- `puts()`: Writes a line of text to the standard output stream (stdout).

These functions are useful for handling character-based input/output operations in C programs.

### Character Manipulation Functions

Character manipulation functions in C are used to perform operations on individual characters or strings. Some commonly used character manipulation functions include:

- `isalpha()`: Checks if a character is an alphabet.
- `isdigit()`: Checks if a character is a digit.
- `isupper()`: Checks if a character is an uppercase letter.
- `islower()`: Checks if a character is a lowercase letter.
- `toupper()`: Converts a character to uppercase.
- `tolower()`: Converts a character to lowercase.
- `strlen()`: Returns the length of a string.
- `strcpy()`: Copies one string to another.
- `strcat()`: Concatenates two strings.
- `strcmp()`: Compares two strings.

These functions are commonly used for character-based operations and string manipulation in C programs.
