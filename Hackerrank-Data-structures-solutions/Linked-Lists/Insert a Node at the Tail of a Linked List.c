SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int d)
{
    SinglyLinkedListNode* newnode;
    
    newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    
    newnode->data=d;
    newnode->next=NULL;

    if(head==NULL)
    {
        return(newnode);
    }
    else
    {
        SinglyLinkedListNode* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        return(head);
    }

}
