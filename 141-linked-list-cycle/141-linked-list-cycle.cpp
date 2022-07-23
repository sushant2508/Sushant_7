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
        //map<int*, int> mp;
        map<ListNode*, int> mp;
        ListNode* temp;
        temp=head;
        while(temp!=NULL){
            mp[temp]++;
            for(auto value:mp){
                if(value.second>1) return true;
            }
            //f(mp.find(temp)!=NULL) return true;
            temp=temp->next;
        }
        return false;
        
    }
};