/*************************************************************************
    > File Name: 977.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Mon May 23 20:27:02 2022
 ************************************************************************/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = nums.size() - 1;
        vector<int> ans (nums.size(), 0);
        for (int i =0, j = nums.size() - 1; i <= j;){
            if (nums[i] * nums[i] > nums[j] * nums[j]){
                ans[k--] = (nums[i] * nums[i]);
                i++;
            }
            else{
            ans[k--] = (nums[j] * nums[j]);
                j--;
            }
        }
    return ans;    
    }
};
