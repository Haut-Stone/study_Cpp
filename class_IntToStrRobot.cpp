/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-11 19:09:04
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-25 21:02:18
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;


class Robot{
private:
	char name[20];
	char type[20];
public:
	//构造函数
	Robot(){
		strcpy(name, "XXXXXX");
		strcpy(type, "XXXXXX");
	}
	//设置函数
	void set(char n[], char t[]){
		strcpy(name, n);
		strcpy(type, t);
	}
	void out(int a);
	void tran_int(int n);
	//析构函数
	~Robot(){};
};

int main(void)
{

    return 0;
}