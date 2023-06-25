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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        TreeNode *curr = NULL;
        int size = 0;
        int outerI = 1;
        int innerI = 0;
        queue<TreeNode*> q;
        
        if (root)
            q.push(root);
        while (!q.empty()) {
            size = q.size();
            ret.resize(outerI);
            for (int i=0; i<size; ++i) {
                curr = q.front();
                q.pop();
                ret[innerI].push_back(curr->val);
                if (curr->left) 
                    q.push(curr->left);
                if (curr->right) 
                    q.push(curr->right);
            }
            ++innerI;
            ++outerI;
        }
        
        return ret;
    }
};