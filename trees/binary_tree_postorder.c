/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 1000);
    *returnSize = 0;
    void postorder(struct TreeNode* root) {
        if (root == NULL)
            return;
        postorder(root->left);                            
        postorder(root->right);        
        result[(*returnSize)++] = root->val;                
    }
    postorder(root);
    return result;
}
