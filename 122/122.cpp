/*************************************************************************
    > File Name: 122.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Sat May 21 22:28:16 2022
 ************************************************************************/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int start = prices[0], end = prices[1];
        for(int i = 0; i < prices.size()-1; i++){
            if(end > start){
                ans += end - start;
                start = prices[i+1];
                end = prices[i+2];
            }
            else{
                start = prices[i+1];
                end = prices[i+2];
            }
        }
        return ans;
    }
};
