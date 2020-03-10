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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * pre;
        ListNode * idx = NULL;
        ListNode * cur = head;
        ListNode * preIndex = NULL;

        int count = 1;

        if (head == NULL || (cur->next == NULL && n == 1))
            return NULL;

        while(cur)
        {
            if (count == n)
            {
                idx = head;
            }

            cur = cur->next;
            count++; 

            if (idx != NULL && cur != NULL)
            {
                preIndex = idx;
                idx = idx->next;
            }
        }

        if (head == idx)
            return idx->next;

        preIndex->next = idx->next;
        idx = NULL;
        delete idx;
