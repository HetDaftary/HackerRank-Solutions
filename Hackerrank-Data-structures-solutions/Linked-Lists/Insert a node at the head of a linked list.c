SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) 
{
    SinglyLinkedListNode* newnode;
    newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    newnode->data=data;
    newnode->next =llist;
    return(newnode);
}
