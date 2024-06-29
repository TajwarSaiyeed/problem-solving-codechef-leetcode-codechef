<!-- Structure declaration
Importance of structure
Structure vs array -->

# Structure

A structure is a user-defined data type in C that allows you to combine data items of different kinds. A structure is a collection of variables of different data types under a single name. It is similar to an array, but an array can store only one type of data, while a structure can store different types of data.

A structure is defined using the `struct` keyword followed by the structure name. The structure members are defined inside curly braces `{}`. Each member of the structure can be accessed using the `.` (dot) operator.

Here is an example of a structure declaration:

```c
struct student {
    int roll_no;
    char name[50];
    float marks;
};
```

In the above example, we have defined a structure named `student` with three members: `roll_no`, `name`, and `marks`. The `roll_no` member is of type `int`, the `name` member is an array of characters, and the `marks` member is of type `float`.

Structures are used to represent complex data types in C. They are used to group related data items together and provide a convenient way to access and manipulate the data.

Structures are widely used in C programming to represent real-world entities such as students, employees, books, etc. They provide a way to organize and manage data in a structured manner.

In summary, structures in C are user-defined data types that allow you to combine data items of different kinds under a single name. They are used to represent complex data types and provide a convenient way to organize and access data.
