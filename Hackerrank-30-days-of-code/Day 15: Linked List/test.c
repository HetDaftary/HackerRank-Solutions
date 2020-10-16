#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    Node* new_node = (Node*) malloc(sizeof(Node));
    Node* temp = head;
    new_node -> data = data;
    new_node -> next = NULL;
    if (head) {
        while (head -> next)
            head = head -> next; 
        head -> next = new_node;
        return temp;
    }
    else
        return new_node;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}

