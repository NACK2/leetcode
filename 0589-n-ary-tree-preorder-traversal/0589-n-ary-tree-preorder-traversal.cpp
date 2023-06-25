/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ret;
    
    void traverse(Node* node) {
        if (node == NULL)
            return;
        
        ret.push_back(node->val);
        for (int i=0; i<node->children.size(); ++i) {
            traverse(node->children[i]);
        }
    }
    
    vector<int> preorder(Node* root) {
        traverse(root);
        
        return ret;
    }
};