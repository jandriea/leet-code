## 242. Valid Anagram

To tackle the problem we only need to store all the letters of both strings to hash maps and check if both maps have the same value and the same key.

## Pseudocode
- if string1 and string2 length is not equal, return early
- Create 2 hash maps for string1 and string2
- store each letter of string1 to hash map 1 and string2 to hash map 2. Use the letter as the "key" and the number of occurrences as "value"
- compare each value of the keys
