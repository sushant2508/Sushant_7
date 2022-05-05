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
        int size=0;
        ListNode *temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        size = (size/2);
        temp=head;
        while(size){
            if(size==1){
                return temp->next;
            }
            temp=temp->next;
            size--;
        }
        return temp;
        
    }
};