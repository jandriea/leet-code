## 1290. Convert Binary Number in a Linked List to Integer

The goal is to convert the value of a linked list to a binary and return the integer value.

This can be achieved using multiple methods.

### Method 1
Walk through the linked list
Append the value of each node into a stack. 
After reaching the tail, convert the stack into binary and return the integer value.

### Method 2
Create a temporary return value and set the value to 0. 
Walk through the linked list
Shift left the return value by one
Add the current node value to the return value
After reaching the tail, return the return value
