// LeetCode - Validate Binary Search Tree
// Topic: Trees
// Idea: keep track of valid range (min, max) for each node
// if a node goes outside the allowed range, it is not a valid BST

#include <limits.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
bool check(struct TreeNode* root, long min, long max) {

    if (root == NULL)
        return true; 
    if (root->val <= min || root->val >= max)
        return false;
    return check(root->left, min, root->val) &&
           check(root->right, root->val, max);
}

bool isValidBST(struct TreeNode* root) {
    return check(root, LONG_MIN, LONG_MAX);
}

// Approach:
// for every node maintain a valid range
// left subtree values must be smaller than the node
// right subtree values must be greater than the node
// if any node violates the range → not a BST
