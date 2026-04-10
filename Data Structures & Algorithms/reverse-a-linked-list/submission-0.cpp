class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while (curr != nullptr) {
            v.push_back(curr->val);
            curr = curr->next;
        }

        reverse(v.begin(), v.end());

        curr = head;
        for (auto x : v) {
            curr->val = x;
            curr = curr->next;
        }

        return head;
    }
};