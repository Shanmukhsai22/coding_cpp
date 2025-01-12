/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode* fast=head;
    ListNode* slow=head;
    stack<int>st;
    bool odd=false;
    if(head->next==nullptr){
        return true;
    }
    while(fast){
        st.push(slow->val);
        if(fast->next==nullptr){
            odd=true;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    if(odd){
        st.pop();
    }
    while(slow){
        if(slow->val==st.top()){
            st.pop();
        }
        slow=slow->next;
    }
    if(st.empty()){
        return true;
    }
    return false;
    }
};