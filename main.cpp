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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res = true;
        
        if (p != q) {
            res = false;
            
            if (p != nullptr && q != nullptr) {
                if (p->val == q->val) {
                    res = isSameTree(p->left, q->left);
                    
                    if (res) {
                        res = isSameTree(p->right, q->right);
                    }
                }
            }
        }
        
        return res;
    }
};
