# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    # method 1 -> recursive
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
    # method 2 -> iterative
    def maxDepthIter(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        s = [(root, 1)]
        max_depth = 0
        while s:
            node, depth = s.pop()
            max_depth = max(max_depth, depth)
            if node.left:
                s.append((node.left, depth + 1))
            if node.right:
                s.append((node.right, depth + 1))
        return max_depth