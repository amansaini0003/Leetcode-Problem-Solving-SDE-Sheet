/* Problem Link: https://leetcode.com/problems/linked-list-cycle/

Approach 1: Using slow and fast pointer
            T.C = O(n)
            S.C = O(1)

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};