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
class Solution {
public:

    // int height(TreeNode* root)
    // {
    //     if(root == NULL)
    //         return 0;
        
    //     return max(height(root->left), height(root->right)) + 1;
    // }
    
    int help(TreeNode* root, int &height)
    {
        if(root == NULL)
            return 0;
    
        int left = help(root->left, height) + 1;
        int right = help(root->right, height) + 1;

        if (abs(left-right) > 1)
        {
            height = 0;
        }
        
        return max(left, right);
        
    }
    bool isBalanced(TreeNode* root) {


        if(root == NULL)
            return true;
        int height = 1;
        help(root, height);
        if(height == 1) return true;
        else return false;
        
        /*first method. O(n^2)*/
        /*

        if(root == NULL)
            return true;
        if(abs(height(root->left) - height(root->right)) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
        
        */
        // return !(abs(height(root->left) - height(root->right)) > 1);
        // return true;
    }
};