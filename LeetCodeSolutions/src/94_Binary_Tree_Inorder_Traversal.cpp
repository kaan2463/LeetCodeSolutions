namespace _94_Binary_Tree_Inorder_Traversal
{
#include<solution.h>

    // 94_Binary_Tree_Inorder_Traversal
    /**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     * };
     */
    class Solution
    {
    public:


        vector<int> inorderTraversal(TreeNode* root)
        {
            vector<int> v;
            traverse(root, v);
            return v;
        }

        void traverse(TreeNode* node, vector<int>& v)
        {
            if (node == nullptr)
            {
                return;
            }
            traverse(node->left, v);
            v.push_back(node->val);
            traverse(node->right, v);
        }
    };

}