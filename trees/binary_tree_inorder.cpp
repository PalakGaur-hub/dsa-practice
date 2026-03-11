// Problem: Binary Tree Inorder Traversal
// Platform: LeetCode
// Topic: Trees
// Approach: Recursion (Left → Root → Right)
// Time Complexity: O(n)
// Space Complexity: O(h)


 struct TreeNode {
 int val;
 struct TreeNode *left;
 struct TreeNode *right;
};
int* inorderTraversal(struct TreeNode* root, int* returnSize) { 
    int* result = (int*)malloc(sizeof(int) * 1000);
    *returnSize = 0;
    void inorder(struct TreeNode* root) {
        if (root == NULL)
            return;
        inorder(root->left);                       
        result[(*returnSize)++] = root->val;        
        inorder(root->right);                      
    }
    inorder(root);
    return result;
}
 LINK- https://leetcode.com/problems/binary-tree-inorder-traversal/?envType=problem-list-v2&envId=tree
