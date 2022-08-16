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
    int dia(TreeNode* root,int* height){
        if(root==NULL){
            *height=0;
            return 0;
        }
        int lh=0,rh=0;
        int ld=0,rd=0;
        ld=dia(root->left,&lh);
        rd=dia(root->right,&rh);
        *height=max(lh,rh)+1;
        return max(lh+rh,max(ld,rd));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int height=0;
        return dia(root,&height);
    }
};