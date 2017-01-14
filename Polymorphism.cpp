/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-14 19:44:11
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-14 20:29:37
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

//手机类
class Mobial{
public:
	Mobial(){}
	char mobialNumber[11];
	virtual void showInfo(){//利用虚函数实现运行时的多态性
		cout<<"this is a mobial"<<endl;
	}
};

class MobialA:public Mobial{
public:
	MobialA(){}//构造函数不可以是虚函数
	virtual void showInfo(){
		cout<<"this is a mobial A"<<endl;
	}
};

class MobialB:public Mobial{
public:
	MobialB(){}
	virtual void showInfo(){
		cout<<"this is a mobial B"<<endl;
	}
};
//测试函数
int main(void)
{
	Mobial m, *p;
	MobialA a;
	MobialB b;
	m = a;
	m.showInfo();
	m = b;
	m.showInfo();
	p = &a;
	p->showInfo();
	p = &b;
	p->showInfo();
	Mobial &p2 = a;
	p2.showInfo();
	Mobial &p3 = b;
	p3.showInfo();
    return 0;
}