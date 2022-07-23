/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *walk=head, *run=head;
        if(head==NULL) return head;
        if(head->next==NULL) return NULL;
        bool cycle = false;
        while(run->next!=NULL && run->next->next!=NULL){
            walk=walk->next;
            run = run->next->next;
            if(walk==run){
                cycle = true;
                break;
            }
        }
        if(cycle==false) return NULL;
        walk=head;
        while(walk!=run){
            walk=walk->next;
            run=run->next;
        }
        return walk;
    }
};