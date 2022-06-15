// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::rc::Rc;
use std::cell::RefCell;
use std::cmp::max;
impl Solution {
    // method 1 -> recursive
    pub fn max_depth(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        let mut max_val = 0;
        
        if let Some(node) = root {
            let left = 1 + Solution::max_depth(node.borrow_mut().left.take());
            let right = 1 + Solution::max_depth(node.borrow_mut().right.take());
        
            max_val = max(left, right);
        }
        return max_val
    }
    // method 2 -> iterative
    pub fn max_depth(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        if root.is_none() {
            // early return
            return 0;
        }
        
        let mut max_val = 0;
        let mut s = vec![(root.unwrap(), 1)];

        while let Some((node, depth)) = s.pop() {
            max_val = max(max_val, depth);
            // add child to stack
            let child = node.borrow(); // borrow the value because T is inside Rc<RefCell<T>>
            if let Some(left) = &child.left { s.push((left.clone(), depth + 1)); }
            if let Some(right) = &child.right { s.push((right.clone(), depth + 1)); }
        }
        return max_val
    }
}