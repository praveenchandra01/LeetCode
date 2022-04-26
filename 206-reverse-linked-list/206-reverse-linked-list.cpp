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
    ListNode* reverseList(ListNode* head) {
        
    if(head == NULL || head->next==NULL) return head;
        
    ListNode *preptr=NULL;
    ListNode *ptr=head;
    ListNode *nxtptr=NULL;
    
        while(ptr!=NULL){
            nxtptr=ptr->next;
            ptr->next=preptr;
            preptr=ptr;
            ptr=nxtptr;
        }
    return preptr;
    }
};