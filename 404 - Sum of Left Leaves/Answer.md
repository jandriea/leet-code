## 404. Sum of Left Leaves

From the question

    A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.

That means we have 2 conditions to check
1. The node must be a left child of another node
2. The node must have no children

## Pseudocode
Method 1 -> recursive
- Using the recursive method, we need to check the target node from its parent because we need to make sure that the target node is a left child. 
- If all conditions are valid, return the target node value and the result of the recursive call on the right child. 
- Otherwise, return the result of the recursive call on the left and the right child 