/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-15 11:50:26
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-15 21:54:21
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;



//基类
class Fruit{
public:
	void show(){
		cout<<"我是水果"<<endl;
	}
};

//苹果类
class Apple:public Fruit{
public:
	void show(){
		cout<<"我是苹果"<<endl;
	}
};

//香蕉类
class Banana:public Fruit{
public:
	void show(){
		cout<<"我是香蕉"<<endl;
	}
};

//梨类
class Pear:public Fruit{
public:
	void show(){
		cout<<"我是梨"<<endl;
	}
};

//桃子类
class Peach:public Fruit{
public:
	void show(){
		cout<<"我是桃子"<<endl;
	}
};

//test
int main(void)
{
	Fruit a;
	Apple b;
	Banana c;
	Pear d;
	Peach e;
	a.show();
	b.show();
	c.show();
	d.show();
	e.show();
    return 0;
}