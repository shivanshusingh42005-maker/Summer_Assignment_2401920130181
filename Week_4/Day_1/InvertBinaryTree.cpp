class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        // Swap left and right child
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // Invert left and right subtrees
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
