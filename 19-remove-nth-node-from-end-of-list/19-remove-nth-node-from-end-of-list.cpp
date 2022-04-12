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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int size=0;
        ListNode* temp = head;
        while(temp!=NULL){
            size++;
            temp= temp->next;
        }
        if(size==1 && n==1) return NULL;
        // if(size==2 && n==2){
        //     return head->next;
        // }
        // if(size==2 && n==1){
        //     head->next= NULL;
        //     return head;
        // }
        if(size==n){
            
            head= head->next;
            return head;
            
        }
        int tar = (size) - n;
        //if(tar==0) tar=1;
        
        int a=1;
        temp = head;
        while(a<=tar){
            
            if(a==tar){
                temp->next = temp->next->next;
            }
            else temp= temp->next;
            a++;     
            
        }
        return head;     
    }
};