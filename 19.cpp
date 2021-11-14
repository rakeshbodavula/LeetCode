// problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return NULL;
        ListNode* tmp=head,*ptr=head;
        for(int i=0;i<n;i++) ptr=ptr->next;
        if(!ptr) return head->next;
        while(ptr && ptr->next){
            ptr=ptr->next;
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};