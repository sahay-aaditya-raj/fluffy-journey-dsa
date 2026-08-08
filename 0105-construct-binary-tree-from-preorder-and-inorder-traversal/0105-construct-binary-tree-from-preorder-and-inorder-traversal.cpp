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
    int preIndex = 0;
    unordered_map<int, int> mp;
    TreeNode* mytree(vector<int>& preorder, int left, int right) {
        if (left > right) return nullptr;
        int t = preorder[preIndex++];
        TreeNode* temp = new TreeNode(t);
        int idx = mp[t];
        temp->left = mytree(preorder, left, idx - 1);
        temp->right = mytree(preorder, idx + 1, right);
        return temp;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        return mytree(preorder, 0, inorder.size() - 1);
    }
};