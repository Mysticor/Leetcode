/*************************************************************************
    > File Name: can_place_flower.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Fri May 20 01:44:16 2022
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for(int i =0; i < size && n>0;)
        {
            if(flowerbed[i] == 1) i += 2;
            else if(i == size -1 || flowerbed[i+1]==0)
            {
                n--;
                i+=2;
            }
            else i+=3;
        }
        return n <= 0;
    }
};

