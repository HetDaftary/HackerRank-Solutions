class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 
class Solution: 
    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next
    #def __init__():
    #self.head = None
    def insert(self,head,data): 
    #Complete this method
        temp = head
        if head == None:
            return Node(data)
        while head.next != None:
            head = head.next
        head.next = Node(data)
        return temp

mylist= Solution()
T=int(input())
head=None
for i in range(T):
    data=int(input())
    head=mylist.insert(head,data)    
mylist.display(head); 	  
