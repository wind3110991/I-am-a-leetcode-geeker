/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 *  tmpA: 4 1 8 4 5 (5) (0) (1) (8)
 *  tmpB: 5 0 1 8 4 (5) (4) (1) (8)
 *
 * https://leetcode-cn.com/problems/intersection-of-two-linked-lists/solution/shuang-zhi-zhen-fa-qiu-jiao-ji-by-windyoung/
 */


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL)
            return NULL;

        ListNode *tmpA = headA;
        ListNode *tmpB = headB;

        while (tmpA != tmpB){
            if (tmpA != NULL)
            {
                tmpA = tmpA->next;
            }
            else
            {
                tmpA = headB;
            }

            if (tmpB != NULL)
            {
                tmpB = tmpB->next;
            }
            else
            {
                tmpB = headA;
            }
        }

        return tmpA;
    }
};
