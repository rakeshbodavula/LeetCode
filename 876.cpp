// problem link : https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp=head;
        ListNode*ptr=head;
        while(ptr->next && ptr->next->next){
            tmp=tmp->next;
            ptr=ptr->next->next;
        }
        if(ptr->next) return tmp->next;
        return tmp;
    }
};

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp=head;
        ListNode*ptr=head;
        while(tmp && ptr && ptr->next){
            tmp=tmp->next;
            ptr=ptr->next->next;
        }
        return tmp;
    }
};
*/