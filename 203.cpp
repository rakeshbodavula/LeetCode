// problem link: https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        if(head->val==val){
            head=removeElements(head->next,val);
            return head;
        }
        else{
            head->next=removeElements(head->next,val);
            return head;
        }
        return head;
    }
};