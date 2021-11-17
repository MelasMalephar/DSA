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
    int minDepth(TreeNode* root) {
         if (root == nullptr) return 0;
        queue<TreeNode*> q, aux;
        q.push(root);
        for (int d = 1; !q.empty(); d++) {
            while (!q.empty()) {
                root = q.front(); q.pop();
                if (root->left == nullptr && root->right == nullptr) return d;
                if (root->left)  aux.push(root->left);
                if (root->right) aux.push(root->right);
            }
            swap(q, aux);
        }
        return 1;
    }
};