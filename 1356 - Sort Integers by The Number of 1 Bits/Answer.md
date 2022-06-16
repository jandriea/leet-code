## 1356. Sort Integers by The Number of 1 Bits

The goal is to sort the given integer array in ascending order by the number of 1's in their binary representation.

There are 3 conditions to fulfill
1. sort in ascending order
2. order the integer by the number of 1's in their binary representation
3. regular sort for any integers which share the same number of 1's

To tackle this problem, we will need a hash map to store the integers with the same number of 1's in a single array. After that, we copy the keys of the map to a list and sort the list to fulfill condition 2. While iterating through the key of the hash map, we also need to sort the value in each key in ascending order (condition 3)

Finally, we append each value of the hash map to the return variable. To achieve the condition 1, we need to use the sorted list of keys and use each value of the list as an iterator to append the hash map value

## Pseudocode
- Create an empty hash map with  an integer as "key" and an integer array as "value"
- Walk through the input list and calculate the number of 1's for each value
- store the calculated number in the hash map. The calculated number will be used as the "key" while the current value of the list will be appended to the "value" of the "key"
- loop through the hash map and store the "key" to a list. In this operation, we also need to sort the "value" of each "key"
- sort the list of "key"
- append "value" of each "key" in the hash map to the return list by using the sorted list of "key" as the iterator.
