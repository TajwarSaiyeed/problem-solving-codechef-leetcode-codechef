from typing import Optional


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    dp = {}
    max_depth = 0

    def depth(self, root, d):
        if root is None:
            return
        self.max_depth = max(self.max_depth, d)
        self.dp[root] = d
        self.depth(root.left, d + 1)
        self.depth(root.right, d + 1)

    def lca(self, root):
        if root is None:
            return None

        if self.dp[root] == self.max_depth:
            return root

        l = self.lca(root.left)
        r = self.lca(root.right)

        return root if l and r else l or r

    def subtreeWithAllDeepest(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.depth(root, 0)
        return self.lca(root)


# https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/
