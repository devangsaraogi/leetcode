# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        if not preorder or not inorder:
            return None

        r = preorder[0]
        root = TreeNode(r)

        for idx, i in enumerate(inorder):
            if i == r:
                r_idx = idx

        r_left = self.buildTree(preorder[1:1+r_idx],inorder[:r_idx])
        r_right = self.buildTree(preorder[1+r_idx:], inorder[1+r_idx:]) 

        root.left = r_left
        root.right = r_right

        return root