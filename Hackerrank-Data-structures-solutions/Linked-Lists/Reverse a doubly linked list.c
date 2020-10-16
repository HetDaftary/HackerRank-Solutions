// Here first element is removed from the list then it's inserted in head1.
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) 
{
    DoublyLinkedListNode* head1 = NULL;
    DoublyLinkedListNode* temp;

    while(head!=NULL)
    {
        temp=head;
        head->prev=NULL;
        head=head->next;
    
        temp->next=head1;
        head1=temp;
        
    }
    return(head1);
}
