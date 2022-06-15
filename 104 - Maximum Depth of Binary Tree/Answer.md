## 104. Maximum Depth of Binary Tree

Using the recursive method we can get the maximum length by comparing the length of the left node with the right node. For each valid node, we will add 1 to the return value and get the maximum value from the left node and the right node.

Sadly, recursion is not suggested in Rust lang. So we need to add an iterative approach for this. For the iterative method, we will walk through the list and store the current depth and node into a stack. We also need to store the maximum depth and return the maximum value when the stack is empty

### Pseudocode
Method 1
- if the input is a null pointer, return 0
- else add to the return value 1 and get the maximum value of the recursive call result for the left node and the right node
---
Method 2
- if the input is a null pointer, return 0
- else create a stack of ListNode and depth
- add root and depth=1 to the stack
- walk through the tree and add the child and depth to the stack
---