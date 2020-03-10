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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL;
        ListNode *p;

        ListNode *node = head;

        while(node)
        {
            p = node->next;
            node->next = pre;
            pre = node;
            node = p;
        }

        return pre;
    }
};
