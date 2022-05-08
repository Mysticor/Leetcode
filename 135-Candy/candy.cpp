/*************************************************************************
    > File Name: candy.cpp
    > Author: XUE JIAN
    > Mail: xue9835426@gmail.com
    > Created Time: Sun May  8 12:27:14 2022
 ************************************************************************/

#include<iostream>
using namespace std;
int findContentChildren(vector<int>& children, vector<int>& cookies) { 
	sort(children.begin(), children.end()); 
	sort(cookies.begin(), cookies.end()); 
	int child = 0, cookie = 0; 
	while (child < children.size() && cookie < cookies.size()) {
		if (children[child] <= cookies[cookie]) ++child;
		++cookie;

	} 
	return child;
}
