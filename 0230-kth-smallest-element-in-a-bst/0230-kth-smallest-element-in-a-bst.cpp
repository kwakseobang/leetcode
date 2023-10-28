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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> sortList;
        Inorder(root,sortList);
        return sortList[k-1];
    }
    void Inorder(TreeNode* root,vector<int>&sortedList){
        if(root != NULL){
            Inorder(root->left,sortedList);
            sortedList.push_back(root->val);
            Inorder(root->right,sortedList);
        }
    }
};