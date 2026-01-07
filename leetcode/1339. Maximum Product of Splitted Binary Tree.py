# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:

    def dfs(self, node):
        if not node:
            return 0
        left = self.dfs(node.left)
        right = self.dfs(node.right)
        curr = node.val + left + right
        self.s_sum.append(curr)
        return curr

    def maxProduct(self, root: Optional[TreeNode]) -> int:
        M = 10**9 + 7
        self.s_sum = []
        total = self.dfs(root)
        ans = 0
        for i in self.s_sum:
            ans = max(ans, i * (total - i))

        return ans % M


# https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/
