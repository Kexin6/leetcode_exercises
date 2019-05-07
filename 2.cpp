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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l1Num = 0;
        int l2Num = 0;
        int accumulator = 1;
        int sum = 0;
        ListNode* last;
        while (l1->next!=NULL) {
            l1Num += (l1->val) * accumulator;
            accumulator *= 10;
            l1 = l1->next;
        }
        accumulator = 1;
        while (l2->next!=NULL) {
            l2Num += (l2->val) * accumulator;
            accumulator *= 10;
            l2 = l2->next;
        }
        sum = l1Num +l2Num;
        while (sum != 0) {
            
        }
    }
};
