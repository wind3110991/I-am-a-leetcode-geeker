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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode *delNode = node->next;
        node->next = node->next->next;
        delNode = NULL;
        delete delNode;
    }
};

作者：windyoung
链接：https://leetcode-cn.com/problems/delete-node-in-a-linked-list/solution/shen-qi-de-yi-ti-yi-kai-shi-du-meng-liao-by-windyo/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
