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
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty())
        {
            int size=que.size();
            vector<int>ans1;
            while(size--)
            {
                TreeNode* temp= que.front();
                ans1.push_back(temp->val);
                que.pop();
                if(temp->left)
                {
                    que.push(temp->left);
                }
                if(temp->right)
                {
                    que.push(temp->right);
                }

            }
            ans.push_back(ans1);
        }
        return ans;

    }
};