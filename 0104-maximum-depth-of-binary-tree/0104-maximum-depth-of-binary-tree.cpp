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
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;
        queue<TreeNode*>q;
        int max = 0;
        int len = 0;
        q.push(root);
        while(!q.empty()){
            len = q.size();
            for(int i = 0; i<len;i++){
                TreeNode * tmp = q.front();
                q.pop();
                if(tmp->left != NULL) {
                    q.push(tmp->left);
                }
                if(tmp->right != NULL) q.push(tmp->right);
            }
            max++;
        }
       return max;
    }
   
  
};