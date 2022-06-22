/*************************************************************************
    > File Name: 226.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Wed Jun 22 19:28:36 2022
 ************************************************************************/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> que;
        if (root != NULL) que.push(root);
        while (!que.empty()) {
            int size = que.size();
            for (int i = 0; i < size; i++) {
                TreeNode* cur = que.front();
                que.pop();
                if (cur->left || cur->right) swap(cur->left, cur->right);
                if (cur->left) que.push(cur->left);
                if (cur->right) que.push(cur->right);
            }
        }
        return root;

    }
};
