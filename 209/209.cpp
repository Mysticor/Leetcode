/*************************************************************************
    > File Name: 209.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Mon May 23 20:27:56 2022
 ************************************************************************/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int sum = 0;
        int subLength = 0;
        int ans = INT32_MAX;
        while (j < nums.size()){
            sum += nums[j];
            while (sum >= target){
                subLength = j - i + 1;
                ans = ans < subLength ? ans : subLength;
                sum -= nums[i++];
            }
            j++;
        }
    return ans == INT32_MAX ? 0 : ans;
    }
};
