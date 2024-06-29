# Array Declaration

An array is a collection of similar data types. It is a fixed-size sequenced collection of elements of the same data type. The elements of an array are stored in contiguous memory locations. The size of an array must be specified at the time of declaration.

The general form of an array declaration is:

```c
data_type array_name[array_size];

// Example
int arr[5];
```

# Array Initialization

An array can be initialized at the time of declaration. The general form of array initialization is:

```c
data_type array_name[array_size] = {value1, value2, value3, ..., valueN};

// Example

int arr[5] = {10, 20, 30, 40, 50};
```


# Applications of Array

Arrays are used to store multiple values of the same data type in a single variable. They are used in various applications such as:

1. Storing a list of elements
2. Implementing data structures like stacks, queues, and trees
3. Representing matrices and multi-dimensional data
4. Implementing sorting and searching algorithms
5. Storing data in tabular form

# Advantages of Array

1. Arrays provide easy access to elements using an index.
2. Arrays allow efficient storage and retrieval of elements.
3. Arrays provide a simple and compact way to store multiple values of the same data type.
4. Arrays are used to implement various data structures and algorithms.

# Disadvantages of Array

1. Arrays have a fixed size, which makes it difficult to change the size dynamically.
2. Arrays are not suitable for storing elements of different data types.
3. Arrays require contiguous memory locations, which may lead to memory fragmentation.
4. Arrays do not provide built-in functions for common operations like sorting and searching.

# What is 2D Array?

A 2D array is an array of arrays. It is a collection of elements arranged in rows and columns. A 2D array is used to represent matrices and multi-dimensional data. The general form of a 2D array declaration is:

```c
data_type array_name[row_size][column_size];

// Example
int matrix[3][3];
```

A 2D array can be initialized at the time of declaration using nested braces. The general form of 2D array initialization is:

```c
data_type array_name[row_size][column_size] = {{value1, value2, value3}, {value4, value5, value6}, {value7, value8, value9}};

// Example
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

A 2D array can be accessed using two indices: row index and column index. The elements of a 2D array are stored in row-major order, i.e., the elements of each row are stored in contiguous memory locations.

```c
// Accessing elements of a 2D array
int value = matrix[row_index][column_index];
```

