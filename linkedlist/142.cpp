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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next ){
            slow=slow->next;
            fast=fast->next->next;
            //cout<<slow->val<<" "<<fast->val;
            //cout<<"\n";
            if(slow==fast){
                break;
            }
        }
        if(!fast || !fast->next){
            return nullptr;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};