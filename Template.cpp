/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-15 23:18:49
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-16 00:03:18
*/
//C++标准模版
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <map>
#include <set>
using namespace std;


int main(void)
{
	vector<int> v(10, 1);
	v.push_back(2);
	v.insert(v.begin(), 3);
	v.pop_back();
	v.erase(v.begin()+1, v.end()-3);
	for(int i=0;i<v.size();i++){
		printf("%d ", v[i]);
	}

    return 0;
}