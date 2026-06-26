class Solution {
public:
    int index = 0;

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int left, int right) {
        if (left > right)
            return NULL;

        TreeNode* root = new TreeNode(preorder[index]);
        index++;

        int mid = left;
        while (inorder[mid] != root->val)
            mid++;

        root->left = build(preorder, inorder, left, mid - 1);
        root->right = build(preorder, inorder, mid + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, inorder.size() - 1);
    }
};
