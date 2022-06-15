## 876. Middle of the Linked List

Finding the middle node is simple, we just need to use a two-pointer.
- pointer A walks one step ahead
- pointer B walks two steps ahead

The idea is when the pointer B reaches the end node, the pointer A is still halfway through the list.

### Pseudo code
- Create ptrA and ptrB
- Set ptrA and ptrB to Head
- Walks through the list while checking ptrB
- if ptrB is nil or ptrB.next is nil, stop the loop
- return ptrA