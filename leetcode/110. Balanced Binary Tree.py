# Definition for a binary tree node.

from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        ans = True

        def h(r):
            nonlocal ans
            if not r:
                return 0

            left = h(r.left)
            right = h(r.right)

            if abs(left - right) > 1:
                ans = False
                return 0

            return 1 + max(left, right)

        h(root)

        return ans


# https://leetcode.com/problems/balanced-binary-tree/
