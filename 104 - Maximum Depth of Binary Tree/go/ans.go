/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func maxDepth(root *TreeNode) int {
    if root == nil {
        return 0
    }
    // No built in Max :|
    left := maxDepth(root.Left)
    right := maxDepth(root.Right)
    if left > right {
        return 1 + left
    } else {
        return 1 + right
    }
}

func maxDepthIter(root *TreeNode) int {
    if root == nil {
        return 0
    }
    
    type Pair struct {
        Node *TreeNode
        Depth int
    }

    maxValue := 0
    stack := []Pair{Pair{Node: root, Depth: 1}}
    // loop through the stack
    for len(stack) > 0 {
        top := len(stack)-1
        curr := stack[top]  // get last element
        stack = stack[:top] // remove last element

        if maxValue < curr.Depth {
            maxValue = curr.Depth
        }

        if curr.Node.Left != nil {
            stack = append(stack, Pair{Node: curr.Node.Left, Depth: curr.Depth + 1})
        }
        if curr.Node.Right != nil {
            stack = append(stack, Pair{Node: curr.Node.Right, Depth: curr.Depth + 1})
        }
    }

    return maxValue
}