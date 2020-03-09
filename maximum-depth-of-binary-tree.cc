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
    int maxDepth(TreeNode* root) {
        // check if tree is null
        if (root == NULL)
        {
            return 0;
        }

        return getDepth(root, 1);
    }

    int getDepth(TreeNode* node, int depth)
    {
        int left = depth;
        int right = depth;

        if (node->left != NULL)
        {
            left = getDepth(node->left, left+1);
        }

        if (node->right != NULL)
        {
            right = getDepth(node->right, right+1);
        }

        return left > right? left : right;
    }
};
