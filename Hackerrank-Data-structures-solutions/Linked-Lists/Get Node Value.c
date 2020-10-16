// Supporting function for stk. 
void push(int* stk,int* tos,int v)
{
    (*tos)++;
    stk[*tos]=v;
}

int getNode(SinglyLinkedListNode* head, int positionFromTail) 
{
    int stk[1000];
    int tos=-1;
    // Creating a stack.

    while(head!=NULL)
    {
        push(stk,&tos,head->data);
        head=head->next;
    }
    // All the values of this linked list are moved into stack.
    return(stk[tos-positionFromTail]);
}
