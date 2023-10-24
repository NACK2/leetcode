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
 * @return {boolean}
 */

function getHeight(root) {
    if (root === null) {
        return -1;
    }
    return 1 + Math.max(getHeight(root.left), getHeight(root.right));
}

var isBalanced = function(root) {
    if (root == null) {
        return true;
    }
    
//     let diff = Math.abs(getHeight(root.right) - getHeight(root.left));
    
//     return diff <= 1 && isBalanced(root.left) && isBalanced(root.right);
    
    let diff = Math.abs(getHeight(root.left) - getHeight(root.right));
    return diff < 2
            && isBalanced(root.left)
            && isBalanced(root.right);
};
