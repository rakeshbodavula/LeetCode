// problem link: https://leetcode.com/problems/merge-two-sorted-lists/

// Iterative

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode *res=new ListNode(),*arr;
        arr=res;
        while(l1 && l2){
            if(l1->val <= l2->val){
                res->val=l1->val;
                l1=l1->next;
            }
            else{
                res->val=l2->val;
                l2=l2->next;
            }
            if(l1 || l2){
            res->next=new ListNode();
            res=res->next;
            }
        }
        while(l1){
            res->val=l1->val;
            l1=l1->next;
            if(l1 || l2){
            res->next=new ListNode();
            res=res->next;
            }
        }
        while(l2){
            res->val=l2->val;
            l2=l2->next;
            if(l2){
            res->next=new ListNode();
            res=res->next;
            }
        }
        return arr;
    }
};


// Recursion

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val <= l2->val){
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else{
            l2->next=mergeTwoLists(l2->next,l1);
            return l2;
        }
        return NULL;
    }
};