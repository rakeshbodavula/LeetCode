// problem link: https://leetcode.com/problems/linked-list-cycle/

// LinkedList

class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head!=NULL){
            if(head->val!=INT_MIN){
                head->val=INT_MIN;
                head=head->next;
            }
            else return true;
        }
        return false;
    }
};


// Two Pointers

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *slow,*fast;
        slow=head,fast=head->next;
        while(slow && fast && fast->next){
            if(fast==slow) return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};