/* Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invert(int count,struct TreeNode* root1,struct TreeNode* root2){
    if(root1==NULL && root2==NULL){
        return NULL;
    }
    if(count%2==0){
        int temp=root1->val;
        root1->val=root2->val;
        root2->val=temp;
    }
    invert(count+1,root1->left,root2->right);
    invert(count+1,root1->right,root2->left);
    return root1,root2;
}
struct TreeNode* reverseOddLevels(struct TreeNode* root){
    int count=0;
    invert(count,root->left,root->right);
    return root;
}