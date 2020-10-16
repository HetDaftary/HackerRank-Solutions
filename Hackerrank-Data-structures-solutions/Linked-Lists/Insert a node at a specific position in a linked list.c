SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{
    SinglyLinkedListNode* temp;
    temp=head;
    int counter=0;
    if(position>0)
    {
        while(counter<position-1 && temp->next!=NULL)
        {
            temp=temp->next;
            counter++;
        } // Even a for loop can be used. we can break loop if temp->next == NULL.
        // Here the temp will be at exact position where we want to insert.
        // Temp->next is to avoid segmentation fualt.
        // In conditons its specified that list won't be empty.

        SinglyLinkedListNode* newnode;
        newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        newnode->data=data;
        newnode->next=temp->next;

        temp->next=newnode;
        return(head);
    }
    else 
    {
        // This insertion in front.
        SinglyLinkedListNode* newnode;
        newnode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        newnode->data=data;
        newnode->next=head; 
        return(newnode);
    }
}
