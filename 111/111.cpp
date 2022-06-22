/*************************************************************************
    > File Name: 111.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Wed Jun 22 19:30:29 2022
 ************************************************************************/

class Solution {
public:
    int minDepth(TreeNode* root) {
        queue<TreeNode*> que;
        if (root != NULL) que.push(root);
        TreeNode* cur;
        int depth = 0;
        while (!que.empty()) {
            depth++;
            int size = que.size();
            for (int i = 0; i < size; i++) {
                cur = que.front();
                que.pop();
                if (cur->left) que.push(cur->left);
                if (cur->right) que.push(cur->right);
                if (cur->left == NULL && cur->right == NULL) return depth;
            }
        }
        return depth;

    }
};
