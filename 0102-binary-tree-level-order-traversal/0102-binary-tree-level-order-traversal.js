/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrder = function(root) {
    let queue = [];
    let res = [];
    
    queue.push(root);
    while (queue[0]) {
        let level = [];
        let length = queue.length;
        for (let i=0; i<length; ++i) {
            tmp = queue.shift();
            level.push(tmp.val);
            
            if (tmp.left) 
                queue.push(tmp.left);
            if (tmp.right) 
                queue.push(tmp.right);
        }
        
        res.push(level);
    }
    
    return res;
};