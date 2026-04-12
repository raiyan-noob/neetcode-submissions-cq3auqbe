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
    bool hasCycle(ListNode* head) {
        set<ListNode*>ase;
        ListNode* temp=head;
        while(temp)
        {
            if(ase.find(temp)!=ase.end())
            return true;
            ase.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};
