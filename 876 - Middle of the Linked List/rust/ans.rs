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
    pub fn middle_node(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        let mut ptrA = &head;
        let mut ptrB = &head;
        while ptrB.is_some() {
            if ptrB.as_ref().unwrap().next.is_some() {
                ptrA = &ptrA.as_ref().unwrap().next;
                ptrB = &ptrB.as_ref().unwrap().next.as_ref().unwrap().next;
            } else {
                return ptrA.clone()
            }
        }

        return ptrA.clone()
    }
}