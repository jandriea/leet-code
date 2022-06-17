## 303. Range Sum Query - Immutable

In this question, we can just simply return the sum of the slice (Method 1) or we calculate the sum in initialization time and return the sum by reducing the calculated sum at the right position with the calculated sum at the left position (Method 2). Method 2 is possible because the List is **immutable** by default. 

## Pseudocode
- Method 1:
  - In initialization time, store the input list
  - In sumRange function, calculate the slice sum by iterating through the list from index left until index right
- Method 2:
  - In initialization time, create an empty list and calculate the sum of the list from left to right. Example : [1, 2, 3] -> [1, 1+2, 1+2+3]
  - In sumRange function, return the value of the index right and reduce the value with the value in the index left. Example: [1, 3, 6] -> func(1, 2) -> 6 - 3 = 3
 