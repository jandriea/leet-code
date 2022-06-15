// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
// 
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }
impl Solution {
    // method 1
    pub fn get_decimal_value(head: Option<Box<ListNode>>) -> i32 {
        let mut n = &head;
        let mut vec = Vec::new();
        while let Some(node) = n {
            vec.push(node.val);
            n = &node.next;
        }

        vec.iter()            // convert to iterator
            .rev()          // reverse the value
            .enumerate()    // add enumeration to the iterator
            .fold(0, |acc, (ind, val)| acc + *val * (1 << ind)) // use fold to create the return value
            // 0 is the initial value
            // acc is the accumulator that store the return value
            // ind and val is the value from enumerate()
            // acc + *val * (1 << ind) is the logic to update the accumulator
            // fold will calculate the logic for each value inside the vector
            // example: if the vector is [1,0,1,1,0] then
            // rev().enumerate() will give -> (0,0),(1, 1),(2,1),(3,0),(4,1)
            // (0,0) -> 0 + 0 * (1 << 0) = 0
            // (1,1) -> 0 + 1 * (1 << 1) = 2
            // (2,1) -> 2 + 1 * (1 << 2) = 6
            // (3,0) -> 6 + 0 * (1 << 3) = 6
            // (4,1) -> 6 + 1 * (1 << 4) = 22
    }
    // method 2
    pub fn get_decimal_value(head: Option<Box<ListNode>>) -> i32 {
        let mut n = &head;
        let mut ret = 0 as i32;
        while let Some(node) = n {
            ret <<= 1;
            ret += node.val;
            n = &node.next;
        }

        ret
    }
}