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
        unordered_set<ListNode*> S;
        while (head != NULL) {
            //If the node is already in the set, then, it has been seen
            if (S.find(head) != S.end()) return true;
            S.insert(head);
            head = head -> next;
            
        }
        return false;
    }
};
