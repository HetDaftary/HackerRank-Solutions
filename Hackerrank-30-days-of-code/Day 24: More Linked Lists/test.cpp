#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

        int is_in(Node* head, int key, int count) {
            int temp_count = 0;
            while (head != NULL && temp_count < count) {
                temp_count++;
                //printf("%d", key);
                if (head -> data == key) return 1;
                else head = head -> next;
            } //printf("\n"); 
            return 0; 
        }

        void remove_next(Node* to_remove) {
            if (to_remove == NULL || to_remove -> next == NULL) return;
            Node* temp = to_remove -> next;
            to_remove -> next = to_remove -> next -> next;
            free(temp);
        }   

        Node* removeDuplicates(Node *head){
            //Write your code here
            int count = 1;
            Node* temp = head;

            if (head == NULL || head -> next == NULL) return head; 
            while (temp -> next != NULL) {
                if (is_in(head, temp -> next -> data, count)) { 
                    remove_next(temp);
                    //printf("called");
                } count++;
                temp = temp -> next;
            } return head;
        }
          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
