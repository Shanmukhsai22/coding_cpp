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
        if(head == nullptr){
            return false;
        }
        ListNode* first=head->next;
        ListNode* sec=head;
        while(first!=sec){
            if(first==NULL || first->next==NULL){
                return false;
            }
            first=first->next->next;
            sec=sec->next;
        }
        return true;
        
    }
};