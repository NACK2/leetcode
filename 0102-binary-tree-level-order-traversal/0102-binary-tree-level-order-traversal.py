# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root: return []
        
        res = []
        queue = []
        
        queue.append(root)
        while queue:
            curr = []
            for i in range(len(queue)):
                tmp = queue.pop(0)
                curr.append(tmp.val)
                if tmp.left != None:
                    queue.append(tmp.left)
                if tmp.right != None:
                    queue.append(tmp.right)
            res.append(curr)
            
        return res