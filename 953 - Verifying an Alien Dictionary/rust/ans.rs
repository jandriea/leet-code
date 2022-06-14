use std::collections::HashMap;

impl Solution {
    // method 1
    pub fn is_alien_sorted(words: Vec<String>, order: String) -> bool {
        // store the order to hash map
        let mut hmap = HashMap::new();
        for (i, x) in order.as_bytes().iter().enumerate() {
            hmap.insert(x, i);
        }
        // loop through the list
        for i in 0..words.len()-1 {
            let w1 = words[i].as_bytes();
            let w2 = words[i + 1].as_bytes();
            // check every char in words
            for j in 0..w1.len() {
                if j == w2.len() {
                    // reaches the end of w2, means w2 is a prefix of w1
                    return false;
                }
                if w1[j] != w2[j] {
                    // find the first difference
                    // check the value in hashmap
                    if hmap.get(&w1[j]) > hmap.get(&w2[j]) {
                        // the current char in w1 comes after char in w2
                        return false;
                    }
                    // stop checking the current words, and start the next one 
				    break;
                }
            }
        }

        return true;
    }
    // method 2
    pub fn is_alien_sorted(words: Vec<String>, order: String) -> bool {
        // loop through the list
        for i in 0..words.len()-1 {
            let w1 = words[i].as_bytes();
            let w2 = words[i + 1].as_bytes();
            // check every char in words
            for j in 0..w1.len() {
                if j == w2.len() {
                    // reaches the end of w2, means w2 is a prefix of w1
                    return false;
                }
                if w1[j] != w2[j] {
                    // find the first difference
                    // check the value in hashmap
                    if order.find(w1[j] as char) > order.find(w2[j] as char) {
                        // the current char in w1 comes after char in w2
                        return false;
                    }
                    // stop checking the current words, and start the next one 
				    break;
                }
            }
        }

        return true;
    }
}