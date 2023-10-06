
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	if (root == NULL) {
        return -1; // Use a sentinel data to indicate no common ancestor found
    }

    // Check for x and y
    if (root->data == x || root->data == y) {
        return root->data;
    }

    int leftAns = lowestCommonAncestor(root->left, x, y);
    int rightAns = lowestCommonAncestor(root->right, x, y);

    if (leftAns == -1 && rightAns == -1) {
        return -1; // No common ancestor found in both subtrees
    } else if (leftAns != -1 && rightAns == -1) {
        return leftAns; // Common ancestor found in the left subtree
    } else if (leftAns == -1 && rightAns != -1) {
        return rightAns; // Common ancestor found in the right subtree
    } else {
        return root->data; // Common ancestor found in both subtrees
    } 

}
