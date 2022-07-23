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
    bool hasCycle(ListNode *head) {
        
        if(head==NULL) return false;    
        ListNode *walk, *run;
        walk = head;
        run = head;
        while(run->next!=NULL && run->next->next!=NULL){
            walk=walk->next;
            run=run->next->next;
            if(walk==run) return true;
        }
        return false;
        // //map<int*, int> mp;
        // map<ListNode*, int> mp;
        // ListNode* temp;
        // temp=head;
        // while(temp!=NULL){
        //     mp[temp]++;
        //     for(auto value:mp){
        //         if(value.second>1) return true;
        //     }
        //     //f(mp.find(temp)!=NULL) return true;
        //     temp=temp->next;
        // }
        // return false;
        
    }
};