
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

#include <bits/stdc++.h> 
// Do not remove this line. 

/**
def has_cycle(head):
    #
    # Time: O(n) .
    # Space: O(n).
    # Set is used to know if an address is repeated or not in O(1). 
    #
    
    set_of_addresses = set()
    # Creating a set which stores the values. 
    
    while head:
        if head in set_of_addresses:
            return True
        set_of_addresses.add(head)
        head = head.next
    return False
 */

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    
    unordered_map<Node*, bool> umap;
    
    while (head) {
        if (umap.find(head) != umap.end()) { // If found, return true. 
            return true;
        } umap[head] = true;
        head = head -> next;
    } return false;
}