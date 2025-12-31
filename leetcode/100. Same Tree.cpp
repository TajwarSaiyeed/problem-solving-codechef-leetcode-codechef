/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void getNode(TreeNode* root, vector<int> &v) {
        if (root == NULL) {
            v.push_back(-1);
            return;
        };
        v.push_back(root->val);
        getNode(root->left, v);
        getNode(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1, v2;
        getNode(p, v1);
        getNode(q, v2);

        for(int c: v1) {
            cout << c << " ";
        }

        cout << endl;

           for(int c: v2) {
            cout << c << " ";
        }

        return v1 == v2;
    }
};