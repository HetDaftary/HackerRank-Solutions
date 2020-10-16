// We use a stack here to print linked list in reverse manner as per it's L.I.F.O principle. 
void push(int* stk,int* tos,int v)
{
    (*tos)++;
    stk[*tos]=v;
} 
void display(int* stk, int tos)
{
    while(tos!=-1)
    {
        printf("%d\n",stk[tos]);
        tos--;
    }
}

void reversePrint(SinglyLinkedListNode* head) 
{
    int stk[1000];
    int tos=-1;

    while(head!=NULL)
    {
        push(stk,&tos,head->data);
        head=head->next;
    }
    display(stk,tos);    
}
