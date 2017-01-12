/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-12 17:00:14
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-12 18:35:21
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

const double PI = 3.1415926;

class Point{
private:
	int x;
	int y;
public:
	//构造函数
	Point(int = 0, int = 0);
	//成员函数
	void SetPoint(int ,int);
	int GetX(){
		return x;
	}
	int GetY(){
		return y;
	}
	void Print();
};
//构造函数外部定义
Point::Point(int a, int b){
	SetPoint(a,b);
}

void Point::SetPoint(int a,int b){
	x = a;
	y = b;
}

void Point::Print(){
	cout<<'['<<x<<','<<y<<']'<<endl;
}

class Circle:public Point{
private:
	double radius;
public:
	Circle(int x = 0, int y = 0, double r = 0.0);
	void SetRadius(double);
	double GetRadius();
	double Area();
	void Print();
};

Circle::Circle(int a, int b, double r):Point(a,b){
	SetRadius(r);
}

void Circle::SetRadius(double r){
	radius = (r >= 0 ? r:0);
}

double Circle::GetRadius(){
	return radius;
}

double Circle::Area(){
	return PI*radius*radius;
}

void Circle::Print(){
	cout<<"Center = ";
	Point::Print();
	cout<<";Radius = "<<radius<<endl;
}


class Cylinder: public Circle
{
private:
	double high;
public:
	Cylinder(int x, int y, double r, double h);
	void Set_data(int x, int y, double r, double h);
	double Area();
	double Volume();
	void Print();
};

Cylinder::Cylinder(int x, int y, double r, double h):Circle(x, y, r){
	high = h;
}

void Cylinder::Set_data(int x, int y, double r, double h){
	SetPoint(x, y);
	SetRadius(r);
	high = h;
}

double Cylinder::Volume(){
	return Circle::Area()*high;
}

double Cylinder::Area(){
	double r = GetRadius();
	return 2*PI*r*r + 2*PI*r*high;
}


int main(void)
{
	cout<<"测试点类"<<endl;
	Point p(30, 50);
	p.Print();
	cout<<endl;
	cout<<"测试圆类"<<endl;
	Circle c(120, 80, 10.0);
	cout<<"圆心:"<<endl;
	c.Point::Print();
	cout<<"\n圆的面积："<<c.Area()<<endl;
	cout<<"测试圆柱体类"<<endl;
	Cylinder v(240, 160, 10.0, 10.0);
	cout<<"圆柱体中心点：";
	v.Point::Print();
	cout<<"\n圆柱体园面积"<<v.Circle::Area()<<endl;
	cout<<"圆柱体表面积"<<v.Area()<<endl;
	cout<<"圆柱体体积"<<v.Volume()<<endl;
    return 0;
}
