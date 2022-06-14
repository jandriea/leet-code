# 953. Verifying an Alien Dictionary

The goal is to check whether the input list is sorted in lexicographical order. 

What is lexicographical order? consider the list below

    [a, b, c]

This list is sorted in lexicographical order because, in the English alphabet, character a comes before b, and c comes after b. Thus

    a < b < c

If we use a valid words

    [aerosol, air, ant]

we need to check the char from each word starting from left to right.

1. all words start with a, skip
2. check the next char in words
   - word1 is e
   - word2 is i
   - word3 is n
	e < i < n, stop checking. The list is already sorted

How about prefix? Let's check this list
    
    [hello, here, he]

1. all words starting with h, skip
2. next char in all words e, skip
3. the next char in word1 is l, word2 is r, and word3 has no char left. This means the word3 is a prefix for the other words. Because word3 is not located in its appropriate location, this list is **not sorted in lexicographical order** 

***
## Method 1: 
In this problem we are not using the English alphabet, so we need to map the Alien dictionary to numbers 1 to 26, to make it easier to compare between characters.

### Pseudocode
    # convert the alien dictionary to 0..25
    # loop through the list
    #   compare 2 words from the input list
    #       check every char, 
    #           if the char is different:
    #               check the the order, 
    #               if word1[x] > word2[x] return False
    #               stop checking this pair and check the next word pair
    #           if word2 reaches the end, return False because word2 is a prefix of word1
    #           if char is similar, next
    #   return True because the list is already sorted
***
## Method 2:
same as method 1 but use find function instead of using hashmap

### Pseudocode
    # loop through the list
    #   compare 2 words from the input list
    #       check every char, 
    #           if the char is different:
    #               find word1[x] and word2[x] in the input order
    #               if word1[x] > word2[x] return False
    #               stop checking this pair and check the next word pair
    #           if word2 reaches the end, return False because word2 is a prefix of word1
    #           if char is similar, next
    #   return True because the list is already sorted