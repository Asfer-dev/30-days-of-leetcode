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
    int re(TreeNode* root, int height, vector<vector<int>>& tree) {
        if (root == NULL)
            return 0;
        tree[height].push_back(root -> val);
        if (root -> left != NULL)
            re(root -> left, height+1, tree);
        if (root -> right != NULL) {
            re(root -> right, height+1, tree);
        }
        return height++;
    }
    int height(TreeNode* root) {
    if (root == nullptr) {
        return 0; // Height of an empty tree is -1
    } else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return 1 + max(leftHeight, rightHeight);
    }
}
};