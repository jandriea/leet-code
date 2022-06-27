use std::collections::HashSet;

impl Solution {
    // attempt 1 - add number to hashmap and check if
    // the hashmap already has the number
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hmap = HashSet::new();
        for x in nums.iter() {
            if hmap.contains(x) {
                return true
            }
            hmap.insert(x);
        }
        
        return false;
    }

    // attempt 1 - convert the input to hash set
    // and compare the length of the set and the vector
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let hset: HashSet<i32> = HashSet::from_iter(nums.clone());
        hset.len() != nums.len()
    }
}