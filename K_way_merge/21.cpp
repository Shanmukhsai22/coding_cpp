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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>v;
        while(list1){
            v.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            v.push_back(list2->val);
            list2=list2->next;
        }
        if(!v.empty()){
            sort(v.begin(),v.end());
            ListNode* head= new ListNode(v[0]);
            ListNode* mover= head;
            for(int i=1;i<v.size();i++){
                ListNode* temp=new ListNode(v[i]);
                mover->next=temp;
                mover=temp;
            }
            return head;
        }
        return nullptr;
    }
};