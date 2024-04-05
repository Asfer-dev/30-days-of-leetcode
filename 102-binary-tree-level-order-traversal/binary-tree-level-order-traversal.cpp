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
        vector<vector<int>> tree(2000);
        re(root, 0, tree);
        vector<vector<int>> tree1(tree.begin(), tree.begin() + height(root));
        return tree1;
    }
    void re(TreeNode* root, int height, vector<vector<int>>& tree) {
        if (root == NULL)
            return;
        tree[height].push_back(root -> val);
        if (root -> left != NULL)
            re(root -> left, height+1, tree);
        if (root -> right != NULL) {
            re(root -> right, height+1, tree);
        }
    }
    int height(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    } else {
        return 1 + max(height(root->left), height(root->right));
    }
}
};