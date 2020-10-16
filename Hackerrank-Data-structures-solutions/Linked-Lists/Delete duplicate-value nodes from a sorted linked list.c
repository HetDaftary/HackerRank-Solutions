SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
    int tempdata;
    SinglyLinkedListNode* temp;
    SinglyLinkedListNode* ntd;
    temp=head;
    while(temp!=NULL)
    {
        tempdata=temp->data;
        while(notempty(temp->next))
        {
            if(temp->next->data==tempdata)
            {
                ntd=temp->next;
                temp->next = temp->next->next;
                free(ntd);
            }
            else
            {
                break;
            }    
        }
        temp=temp->next;
    }
    return(head);
}
