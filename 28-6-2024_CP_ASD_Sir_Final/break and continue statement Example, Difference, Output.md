# break and continue statement: Example, Difference

## break statement

The break statement is used to terminate the loop immediately. The control of the program moves to the statement immediately following the body of the loop.

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
```

In this example, the loop will terminate when the value of `i` becomes 5. The output of the program will be:

```
1
2
3
4
```

## continue statement

The continue statement is used to skip the current iteration of the loop and move to the next iteration. It is often used to skip certain values or conditions in the loop.

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
```

In this example, the loop will skip even numbers and print only odd numbers. The output of the program will be:

```
1
3
5
7
9
```

## Difference between break and continue statement

The main difference between the break and continue statements is:

<!-- create a table -->

| Statement | Description                                                                |
| --------- | -------------------------------------------------------------------------- |
| break     | Terminates the loop immediately and moves to the statement after the loop. |
| continue  | Skips the current iteration of the loop and moves to the next iteration.   |

The break statement is used to exit the loop prematurely, while the continue statement is used to skip the current iteration and continue with the next iteration of the loop.
