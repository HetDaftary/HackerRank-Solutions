/*
Detect a cycle in a linked list. Note that the head pointer may be 'null' if the list is empty.

A Node is defined as: 
    class Node {
        int data;
        Node next;
    }
*/


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


boolean hasCycle(Node head) {
    Set<Node> addresses = new HashSet<Node>();
    
    while (head != null) {
        if (addresses.contains(head)) {
            return true;
        } addresses.add(head);
        head = head.next;
    } return false;
}