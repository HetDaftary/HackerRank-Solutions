int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    SinglyLinkedListNode* currentA = headA;
    SinglyLinkedListNode* currentB = headB;

    //Do till the two SinglyLinkedListNode*s are the same
    while(currentA != currentB){
        //If you reached the end of one list start at the beginning of the other one
        //currentA
        if(currentA->next == NULL){
            currentA = headB;
        }else{
            currentA = currentA->next;
        }
        //currentB
        if(currentB->next == NULL){
            currentB = headA;
        }else{
            currentB = currentB->next;
        }
    }
    return currentB->data;
}
