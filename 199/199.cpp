/*************************************************************************
    > File Name: 199.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Wed Jun 22 19:31:01 2022
 ************************************************************************/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans = {};
        TreeNode* cur;
        if (root == NULL) return ans;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            int size = que.size();
            //vector<int> vec = {};
            for (int i = 0; i < size; i++) {
                cur = que.front();
                que.pop();
                if (i == size - 1) ans.push_back(cur->val);
                if (cur->left) que.push(cur->left);
                if (cur->right) que.push(cur->right);
                
            }
            //ans.push_back(vec);
        }
        return ans;
    }
};
