/*************************************************************************
    > File Name: 59.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Mon May 23 20:28:33 2022
 ************************************************************************/
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void print(vector<vector<int>> a){
        vector<vector<int> >::iterator p1;
        vector<int>::iterator p2;
        for (p1 = a.begin(); p1 != a.end(); p1++)
            {
                for (p2 = p1->begin(); p2 != p1->end(); p2++)
                    {
                        cout << "[" << *p2 << "]";
                    }
                cout <<endl;
            }
        cout <<endl;
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans (n, vector<int> (n, 0));
        int x = 0, y = 0;
        int length = 1;
        int lop = n / 2;
        int start_num = 1;
        int mid = n / 2;
        int i = 0, j = 0;
        while (lop--) {
            
            for ( j = y; j < y + n - length; j++){
                ans[x][j] = start_num++;
            }
            for ( i = x; i < x + n - length; i++){
        
            }
            for (; j > y; j--){
                ans[i][j] = start_num++;
            }
            for (; i > x; i--){
                ans[i][j] = start_num++;

            }
            x++;
            y++;
            length += 2;
        }
        if (n % 2) {
            ans[mid][mid] = start_num;
        }
        return ans;
    }
};
int main() {
    int a[] = {1};
    int n = 3;
    Solution solution;
    vector<vector<int>> ans (n, vector<int> (n, 0));
    ans = solution.generateMatrix(n);
    solution.print(ans);
}
