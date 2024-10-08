/*
    Author: Tajwar Saiyeed
    Date: 2024-09-07 23:38:46
    File: 404. Sum of Left Leaves.cpp
*/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    void leftLeaves(TreeNode *root, int &sum)
    {
        if (root == NULL)
            return;

        if (root == NULL)
            return;

        if (root->left && !root->left->left && !root->left->right)
        {
            sum += root->left->val;
        }

        leftLeaves(root->left, sum);
        leftLeaves(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        int sum = 0;
        leftLeaves(root, sum);
        return sum;
    }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution s;
    cout << s.sumOfLeftLeaves(root) << endl;
    return 0;
}

// Problem: https://leetcode.com/problems/sum-of-left-leaves/