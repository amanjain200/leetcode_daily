/*
141. Linked List Cycle
Easy
13.9K
1.1K
Companies

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:

Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:

Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Example 3:

Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.

 

Constraints:

    The number of the nodes in the list is in the range [0, 104].
    -105 <= Node.val <= 105
    pos is -1 or a valid index in the linked-list.

 

Follow up: Can you solve it using O(1) (i.e. constant) memory?
Accepted
2.3M
Submissions
4.8M
Acceptance Rate
48.6%
Seen this question in a real interview before?
1/4
Yes
No
Discussion (131)
Similar Questions
Linked List Cycle II
Medium
Happy Number
Easy
Related Topics
Hash Table
Linked List
Two Pointers
Copyright ©️ 2023 LeetCode All rights reserved
1
2
3
*/
/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        while(slow != NULL){
            slow->val = 1e9;
            slow=slow->next;
            if(slow != NULL && slow->val == 1e9) return true;;
            //if(slow != NULL && fast != NULL && slow == fast) return true;
        }
        return false;
    }
};
*/