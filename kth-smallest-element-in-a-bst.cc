/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);

        return v[k-1];
    }

    //  inorder method
    void inorder(TreeNode* node, vector<int> &v)
    {   
        if (node == NULL)
            return;
            
        inorder(node->left, v);
        v.push_back(node->val);
        inorder(node->right, v);
    }
};

作者：windyoung
链接：https://leetcode-cn.com/problems/kth-smallest-element-in-a-bst/solution/mian-shi-zhong-kao-cha-de-hen-duo-de-bst-dfsjie-fa/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
