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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ret;
        queue<TreeNode*> q;
        int size = q.size();
        double avg = 0.0;
        TreeNode* curr = NULL;
        
        q.push(root);
        while (!q.empty()) { // similar to level order traversal
            size = q.size();
            avg = 0.0;
            for (int i=0; i<size; ++i)
            {
                curr = q.front();
                q.pop();
                avg += curr->val;
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }   
            ret.push_back(avg/size);
        }
        
        return ret;
    }
};