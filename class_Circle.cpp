/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 22:19:42
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-11 18:52:40
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	void InitPoint(int ,int);
	int GetX(){
		return x;
	}
	int GetY(){
		return y;
	}
	void Print();
};

void Point::InitPoint(int a, int b){
	x = a;
	y = b;
}

void Point::Print(){
	cout<<'['<<x<<','<<y<<']';
}


class Circle{
private:
	double radius;
	Point Center;
public:
	void InitCircle(double, Point);
	double GetRadius();
	Point GetCenter();
	double Area();
	void Print();
};

void Circle::InitCircle(double r, Point p){
	radius = (r >=0 ? r:0);
	Center = p;
} 

double Circle::GetRadius(){
	return radius;
}

Point Circle::GetCenter(){
	return Center;
}

double Circle::Area(){
	return 3.14159*radius*radius;
}

void Circle::Print(){
	cout<<"Center=";
	Center.Print();
	cout<<";Radius = " <<radius<<endl;
}

//测试主函数
int main(void)
{
	Point p, center;
	p.InitPoint(30, 50);
	center.InitPoint(120, 80);
	Circle c;
	c.InitCircle(10.0, center);

	cout<<"Point p:";
	p.Print();
	cout<<endl;
	cout<<"Circle c:";
	c.Print();
	cout<<"The Center of the circle c:";
	c.GetCenter().Print();
	cout<<"\nThe area of the Circle c:"<<c.Area()<<endl;
    return 0;
}