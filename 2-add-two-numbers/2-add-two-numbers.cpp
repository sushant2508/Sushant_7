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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int extra=0;
        if(l1==NULL && l2==NULL) return l1;
        ListNode preHead(0), *p = &preHead;
       while(l1 || l2 || extra){
           if(l1){
               extra = l1->val + extra;
               l1=l1->next;
           }
           if(l2){
               extra = l2->val + extra;
               l2=l2->next;
           }
           p->next = new ListNode(extra % 10);
           extra = extra/10;
           p=p->next;
           
       }
        return preHead.next;
    }
        
     
};