class Solution {
public:
    int tiltSum = 0;
    int findTilt(TreeNode* root) {
        DFS(root);
        return tiltSum;
    }
    int DFS(TreeNode* root) {
        if(!root) return 0;
        int leftSum = DFS(root -> left);               
        int rightSum = DFS(root -> right);             
        tiltSum += abs(leftSum - rightSum);            
        return leftSum + rightSum + root -> val;    
    }
};