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
    int sumNumbers(TreeNode* root) {
        int s = 0;
        int res = sumBT(root, s);
        return res;
    }
private:
    int sumBT(TreeNode * node, int sum){
        if(node == NULL)
            return 0;
        else if(node -> left == NULL and node -> right == NULL)
            return sum*10 + node-> val;
        else return sumBT(node -> left, sum*10 + node -> val) + 
                    sumBT(node -> right, sum*10 + node -> val);
    }
};

