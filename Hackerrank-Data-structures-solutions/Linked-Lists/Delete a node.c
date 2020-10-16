SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    SinglyLinkedListNode* temp;
    temp=head;
    
    if(position == 0)
    {
        head=head->next;
        free(temp);
        return(head);
    }
    else
    {
        int counter=1;
        while(temp->next!=NULL && counter<position)
        {
            temp=temp->next;
            counter++;
        } // Here we get to position -1 
        SinglyLinkedListNode* ntd; // node to delete address.
        ntd=temp->next; // get required address.
        temp->next=temp->next->next; // guides previous node to next node.
        free(ntd); // removes the required element.
        return(head);
    }
}
