void insert(SinglyLinkedListNode* temp,SinglyLinkedListNode** head3,SinglyLinkedListNode** tail3)
{
    if(*head3==NULL)
    {
        temp->next=NULL;
        (*head3)=temp;
        (*tail3)=temp;
    }
    else 
    {
        temp->next=NULL;
        (*tail3)->next=temp;
        (*tail3)=temp;
    }
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode* head3=NULL;
    SinglyLinkedListNode* temp;

    SinglyLinkedListNode* tail3=NULL;
    // Maintaining tail pointer to get o(1) insertion time for insert at end.

    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data <= head2->data)
        {
            // Insert head1's element in list head3.
            temp=head1;
            head1=head1->next;
            
            insert(temp, &head3, &tail3);
        }
        else 
        {
            temp=head2;
            head2=head2->next;
            
            insert(temp,&head3,&tail3);
        }
    }
    if(head1==NULL) // Here anyone of linked list may be not empty and if both empty nothing is added as NULL remains NULL.
    {
        tail3->next=head2;
    }
    else 
    {
        tail3->next=head1;
    }
    return(head3);
}
