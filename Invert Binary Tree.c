/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invert(struct TreeNode* root){
    if(root==NULL){
        return;
    }
    invert(root->left);
    invert(root->right);
    struct TreeNode* t=root->left;
    root->left=root->right;
    root->right=t;
    return root;
}
struct TreeNode* invertTree(struct TreeNode* root){
    invert(root);
    return root;
}