class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root

    def getHeight(self, root):
        if (root.left == None and root.right == None): 
            return 0
        if (root.left != None and root.right == None): 
            return self.getHeight(root.left) + 1
        if (root.right != None and root.left == None): 
            return self.getHeight(root.right) + 1
        return max(self.getHeight(root.left), self.getHeight(root.right)) + 1
T=int(input())
myTree=Solution()
root=None
for i in range(T):
    data=int(input())
    root=myTree.insert(root,data)
height=myTree.getHeight(root)
print(height)       
