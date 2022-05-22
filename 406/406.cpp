/*************************************************************************
    > File Name: 406.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Sun May 22 01:11:48 2022
 ************************************************************************/

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](const vector<int>& a,const  vector<int>& b){
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        vector<vector<int>> ans;
        for(vector<int> this_person : people){
            ans.insert(ans.begin()+this_person[1], this_person);
        }
        return ans;
    }
};
