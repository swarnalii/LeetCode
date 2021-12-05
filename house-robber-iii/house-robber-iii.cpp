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
    pair<int, int> robSub(TreeNode* root){
        if (root == NULL) 
            return {0,0};

        pair<int, int> left = robSub(root->left);
        pair<int, int> right = robSub(root->right);
        return make_pair(
            root->val + left.second + right.second,
            max(left.first, left.second) + max(right.first, right.second)
        );
    }
public:
    int rob(TreeNode* root) {
        pair<int, int> res = robSub(root);
        return max(res.first, res.second);
    }
};