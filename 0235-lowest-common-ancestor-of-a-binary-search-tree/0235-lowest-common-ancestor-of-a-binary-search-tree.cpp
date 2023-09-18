/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *curr = root;
        int l = p->val;
        int r = q->val;
        if (p->val > q->val) {
            l = q->val;
            r = p->val;
        }
        
        while (curr) {
            if (curr->val > l && curr->val < r) 
                return curr;
            else if (curr->val == l || curr->val == r) 
                return curr;
            else if (curr->val > l && curr->val > r)
                curr = curr->left;
            else 
                curr = curr->right;
        }
        
        return NULL;
    }
};