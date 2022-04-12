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
   void help(ListNode *&left, ListNode *right, bool &flag){
       
       
       if(right==NULL) return;
       
      help(left, right->next, flag);
       if(left == right || left->next==right){
           if(flag== false)
           {
            right->next=NULL;
            //return;
           }
           
           flag = true;
       }
      
       if(!flag){
           
           right->next= left->next;
           left->next = right;
           left = right->next;      
       }
       
   }
    void reorderList(ListNode* head) {
        
        bool flag = false;
        help(head, head, flag);
    }
};