<!-- Strings input-output functions: scanf(), gets(), fgets(), puts()
String handling functions: strlen(), strcmp(), strcat(), strcpy(), strrev(), strupr(),
strlwr(), strchr() -->

### Strings in C Programming

In C programming, a string is a sequence of characters stored in an array. Strings are used to represent text or character data in a program. In C, strings are represented as arrays of characters terminated by a null character (`'\0'`). The null character marks the end of the string and is used to indicate the end of the character sequence.

#### Declaring and Initializing Strings

Strings in C can be declared and initialized in several ways:

1. **Using character arrays**: Strings can be declared as character arrays with a specified size to hold the characters of the string. For example:

   ```c
   char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   ```

   In this declaration, `str1` is an array of characters with a size of 6, initialized with the characters `'H', 'e', 'l', 'l', 'o'`, and the null character `'\0'` to mark the end of the string.

2. **Using string literals**: Strings can also be declared using string literals, which are enclosed in double quotes (`"`). For example:

   ```c

   char str2[] = "Hello";
   ```

   In this declaration, `str2` is an array of characters initialized with the string literal `"Hello"`. The compiler automatically determines the size of the array based on the length of the string literal.

3. **Using pointers**: Strings can be represented using pointers to character arrays. For example:

   ```c

   char *str3 = "Hello";
   ```

   In this declaration, `str3` is a pointer to a character array initialized with the address of the string literal `"Hello"`. The compiler automatically assigns the address of the string literal to the pointer.

#### String Input and Output Functions

In C programming, strings can be read from and written to the standard input/output streams using various input/output functions. Some commonly used string input/output functions include:

- `scanf()`: Reads a formatted string from the standard input stream (stdin).
- `gets()`: Reads a line of text from the standard input stream (stdin).
- `fgets()`: Reads a line of text from a file stream.
- `puts()`: Writes a line of text to the standard output stream (stdout).

These functions are useful for handling string-based input/output operations in C programs.

#### String Manipulation Functions

String manipulation functions in C are used to perform operations on strings, such as copying, concatenating, comparing, and modifying strings. Some commonly used string manipulation functions include:

- `strlen()`: Returns the length of a string.
- `strcmp()`: Compares two strings.
- `strcat()`: Concatenates two strings.
- `strcpy()`: Copies one string to another.
- `strrev()`: Reverses a string.

These functions are commonly used for string manipulation and processing in C programs.

#### Example: String Input and Output

Here is an example program that demonstrates reading and writing strings using the `gets()` and `puts()` functions:

```c
#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("You entered: ");
    puts(str);

    return 0;
}
```

In this program, the `gets()` function is used to read a line of text from the standard input stream and store it in the `str` array. The `puts()` function is then used to write the string stored in `str` to the standard output stream.
