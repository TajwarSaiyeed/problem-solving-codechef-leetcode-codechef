# Differences between for, while and do-while loop

| Loop Type     | Syntax                                               | Condition Check                | Initialization                          | Increment/Decrement                              |
| ------------- | ---------------------------------------------------- | ------------------------------ | --------------------------------------- | ------------------------------------------------ |
| for loop      | for (initialization; condition; increment/decrement) | Before entering the loop       | Initialization is done only once        | Increment/decrement is done after each iteration |
| while loop    | while (condition)                                    | Before entering the loop       | Initialization is done outside the loop | Increment/decrement is done inside the loop      |
| do-while loop | do { // code block } while (condition);              | After executing the code block | Initialization is done outside the loop | Increment/decrement is done inside the loop      |

The main differences between the for, while, and do-while loops are:

1. **Condition Check**:

   - In the for loop, the condition is checked before entering the loop.
   - In the while loop, the condition is checked before entering the loop.
   - In the do-while loop, the condition is checked after executing the code block.

2. **Initialization**:

   - In the for loop, the initialization is done only once at the beginning of the loop.
   - In the while loop, the initialization is done outside the loop.
   - In the do-while loop, the initialization is done outside the loop.

3. **Increment/Decrement**:

   - In the for loop, the increment/decrement is done after each iteration.
   - In the while loop, the increment/decrement is done inside the loop.
   - In the do-while loop, the increment/decrement is done inside the loop.

These differences make each loop type suitable for different scenarios and programming requirements. The choice of loop type depends on the specific needs of the program and the desired behavior of the loop.
