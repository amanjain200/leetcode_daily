/*
86. Partition List
Medium
6.4K
710
Companies

Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

 

Example 1:

Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

Example 2:

Input: head = [2,1], x = 2
Output: [1,2]

 

Constraints:

    The number of nodes in the list is in the range [0, 200].
    -100 <= Node.val <= 100
    -200 <= x <= 200



*/

/*
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* current = head;  // Pointer to traverse the original list
        
        ListNode* lessDummy = new ListNode(0);    // Dummy node for nodes < x
        ListNode* lessTail = lessDummy;           // Tail pointer for less list
        
        ListNode* greaterDummy = new ListNode(0); // Dummy node for nodes >= x
        ListNode* greaterTail = greaterDummy;     // Tail pointer for greater list
        
        // Traverse the original list
        while (current != nullptr) {
            if (current->val < x) {
                // Append current node to the less list
                lessTail->next = new ListNode(current->val);
                lessTail = lessTail->next; // Move the tail pointer
            } else {
                // Append current node to the greater list
                greaterTail->next = new ListNode(current->val);
                greaterTail = greaterTail->next; // Move the tail pointer
            }
            current = current->next; // Move to the next node
        }
        
        
        // Attach the greater list to the end of the less list
        lessTail->next = greaterDummy->next;
        
        // Return the modified list starting from the first node after the less dummy node
        return lessDummy->next;
    }
};


*/