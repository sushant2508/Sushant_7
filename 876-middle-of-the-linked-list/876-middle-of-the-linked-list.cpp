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
    ListNode* middleNode(ListNode* head) {
        
        if(head==NULL) return head;
        int count=0;
        ListNode* temp;
        temp=head;
        while(temp!=NULL){
            
            count++;
            temp=temp->next;  
        }
        temp=head;
       
            int b = (count/2);
            while(b--){
                temp=temp->next;
            }
            return temp;
        
       
        }
        
};