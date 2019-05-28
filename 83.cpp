class Solution {
public:
   ListNode * deleteDuplicates (ListNode* head) {
       ListNode * dup = head;
       while (dup != NULL && dup->next != NULL) {
           if (dup->val == dup-> next->val) {
               dup->next = dup->next->next;
           } else {
               dup = dup->next;
           }
       }
       return head;
   }



}
