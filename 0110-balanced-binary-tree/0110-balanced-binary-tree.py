# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getHeight(self, root):
        if not root:
            return 0
        
        left = self.getHeight(root.left)
        right = self.getHeight(root.right)
        
        return max(left, right) + 1
    
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        
        left = self.getHeight(root.left)
        right = self.getHeight(root.right)
        
        return abs(right-left) <= 1 and self.isBalanced(root.left) and self.isBalanced(root.right)