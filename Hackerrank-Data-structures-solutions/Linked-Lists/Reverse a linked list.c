SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode* head1=NULL;
    SinglyLinkedListNode* temp;
    while(head!=NULL)
    {
        temp=head;
        head=head->next;
        // we get to next element in given linked list.

        temp->next=head1;
        head1=temp;
        // now this temp node is removed from head and inserted in head1.
    }
    return(head1); 
}
