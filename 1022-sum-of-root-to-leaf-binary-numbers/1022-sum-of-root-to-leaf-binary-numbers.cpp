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
    int sum = 0;
    void preOrderSum(TreeNode* root, int currNum){
        if(root != NULL){
            currNum = (currNum  << 1) | root -> val;
            if(root -> left == NULL and root -> right == NULL)
                sum += currNum;
            preOrderSum(root -> left, currNum);
            preOrderSum(root -> right, currNum);
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        preOrderSum(root, 0);
        return sum;
    }
};



// cur_val << 1 means we're shifting the bits of cur_val to the left by 1 place, which is equivalent to multiplying cur_val by 2 (in base 10). Bitwise OR is used to set a particular bit. Let's take an example!
// Suppose, the root-to-leaf path is 1->0->1.
// Then, at the root, initially cur_val is 0. We multiply it by 2 and perform bitwise OR with 1 which makes cur_val 1.
// Next, cur_val is 1. We multiply it by 2 and perform bitwise OR with 0 which makes cur_val 2.
// Last, at the leaf, cur_val is 2. We multiply it by 2 and perform bitwise OR with 1 which makes cur_val 5.
// 101 (base 2) is 5 (base 10).