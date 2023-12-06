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
    vector<vector<int>> levelOrder(TreeNode* root) {
    
    vector<vector<int>> ans;
    if(root == NULL)
    {
        return ans;
    }


    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty())
    {
        int levelsize = q.size();
        vector<int> tmp;
        for(int i = 0; i < levelsize; i++)
        {
            TreeNode* front = q.front();
            q.pop();
            
            // tmp[i] = (front->val);
            tmp.push_back(front->val);

            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }
        ans.push_back(tmp);
    }

    return ans;
    }
};