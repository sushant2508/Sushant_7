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
    int getDecimalValue(ListNode* head) {
        
        ListNode* temp=head;
        int ans =0;
        // int len=0;
        // while(temp!=NULL){
        //     len++;
        //     temp = temp->next;     
        // }
        // temp = head;
        while(temp!=NULL){
            
            // ans = ans + pow(2,len-1)*(temp->val);
            // temp= temp->next;
            // len--;
            ans = ans*2;
            ans = ans + temp->val;
            temp = temp->next;
            
        }
        return ans;
        
        
        
    }
};