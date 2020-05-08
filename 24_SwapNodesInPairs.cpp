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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* two = head->next->next;
        ListNode* one = head->next;
        
        head->next->next = head;
        head->next = swapPairs(two);
        
        return one;
    }
};