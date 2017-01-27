/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2017 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-25 21:05:38
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-25 21:35:22
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
using namespace std;


class girls{
private:
	char name[20];
	double height;
	double weight;
	char bar;
	char hair[20];
public:
	void eat();
	void walk();
	void sleep();
	void drink();
};
class luoLi:public girls{
private:
	bool likeMe;
public:
	void cry();
	void smile();
	void spoiled();//撒娇
};

int main(void)
{

    return 0;
}