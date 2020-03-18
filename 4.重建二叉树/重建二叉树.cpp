/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        TreeNode* root = reConstructBinaryTree(pre, 0, pre.size()-1, vin, 0, vin.size()-1);
        return root;
    }
    TreeNode* reConstructBinaryTree(vector<int> pre, int startPre, int endPre, vector<int> in, int startIn, int endIn){
        if(startPre>endPre||startIn>endIn)
            return NULL;
        TreeNode* root = new TreeNode(pre[startPre]);
        for(int i=startIn; i<=endIn; i++){
            if(in[i] == pre[startPre]){
                root->left = reConstructBinaryTree(pre, startPre+1, startPre+i-startIn, in, startIn, i-1);
                root->right = reConstructBinaryTree(pre, startPre+i-startIn+1, endPre, in, i+1, endIn);
                break;
            }
        }
        return root;
    } 
};