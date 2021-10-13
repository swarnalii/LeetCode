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
    int ind = 0;
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int split = INT_MAX;
        return constructBST(preorder, split);
    }
    
    TreeNode* constructBST(vector<int>& preorder, int split){
        if(ind >= preorder.size() or split < preorder[ind])
            return NULL;
        TreeNode* node = new TreeNode(preorder[ind++]);
        node->left = constructBST(preorder, node->val);
        node->right = constructBST(preorder, split);
        return node;
    }
};