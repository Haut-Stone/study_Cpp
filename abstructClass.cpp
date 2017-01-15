/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-14 20:31:42
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-15 11:50:08
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

const double PI = 3.1415926;

//抽象类
class Shape{
public:
	virtual double area() = 0;//纯虚函数
	virtual double cf() = 0;
};

//矩形类
class Rectangle:public Shape{
private:
	int hight, width;
	int x, y;
public:
	Rectangle(int x, int y, int w, int h){
		this->x = x;
		this->y = y;
		width = w;
		hight = h;
	}
	virtual double area(){
		return width*hight;
	}
	virtual double cf(){
		return 2.0*(width + hight);
	}
};

//圆类
class Circle:public Shape{
private:
	int x, y;
	int r;
public:
	Circle(int x, int y, int r){
		this->x = x;
		this->y = y;
		this->r = r;
	}
	virtual double area(){
		return PI*r*r;
	}
	virtual double cf(){
		return 2*PI*r;
	}
};

//test
int main(void)
{

    return 0;
}