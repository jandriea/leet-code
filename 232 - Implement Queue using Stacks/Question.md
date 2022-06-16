## 232. Implement Queue using Stacks

The goal is to create a queue by using the stacks. In some languages, there is no build-in stack data structure. So, we need to implement that first.

From the question, we are only allowed to use this method from the stack data structure
- push to top
- peek/pop from top
- size
- is empty function
That means we can only access the last element of the stack. The time-consuming operations for this are pop and peek because we need to have access to the first element. To speed up the peek operation, we can store the first element's value and update it when we do push or pop operations.

In a push operation, we only need to check stack size to update the FirstElement value for peek operation. If the size is 0, that means the input value will be set as the FirstElement value. After that, we can safely append the input value to the stack.

In pop operation, we will need a temporary stack to store all the current values while we are getting access to the first element. Please note that the temporary is in reverse order or the original stack. After we got the first element, we can safely return the value and put back the data from the temporary stack to the original stack. While doing this, we also need to update the FirstElement value of the Queue.

The empty operation just needs to compare the current stack size with 0

## Pseudocode
- Push
    - Check stack size, if 0 update the FirstElement value. 
    - Push the input to the stack
- Pop
  - Create a new temporary stack
  - while the original stack is not empty, pop the original stack and store the value in the temporary stack
  - if the original stack is empty, pop the temporary stack and set the value as the return value
  - pop the temporary stack, set it as the FirstElement value, and also push the value to the original stack
  - while the temporary stack is not empty, pop the temporary stack and push the value to the original stack
  - return the return value
- Empty
  - compare the stack value with 0
- Peek
  - return the FirstElement value
