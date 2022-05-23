/*************************************************************************
    > File Name: 27.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Mon May 23 20:25:53 2022
 ************************************************************************/

//暴力求解
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++){
            if (nums[i] == val) {
                for (int j = i; j + 1 < size; j++) {
                    nums[j] = nums[j + 1];
                }
                i--;
                size--;
            }
        }
    return size;
    }
};
//双指针
//class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++){
            if (val != nums[fast]){
                nums[slow++] = nums[fast];
                nums.size();
            }
        }
    return slow;
    }
};
