DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) 
{
    DoublyLinkedListNode* temp;
    DoublyLinkedListNode* newnode;
    newnode=(DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    newnode->data=data;
    
    if(data < head->data)
    {
        newnode->next=head;
        return(newnode);
    }
    else 
    {
        temp=head;

        while(temp->next!=NULL && data > temp->next->data)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        return(head);
    }    
}
