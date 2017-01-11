/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-11 18:53:10
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-11 19:07:45
*/
//析构函数，可是还有一点小问题。。
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

class Date{
private:
	int year;
	int month;
	int day;
public:
	//重载的构造函数
	Date():year(1900), month(1), day(1){}
	Date(int yy, int mm = 1, int dd= 1);
	Date(Date &d):year(d.year), month(d.month), day(d.day){}
	Date(char *ps);
	void print_ymd();
	~Date(){};//析构函数
};

void Date::print_ymd(){
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}

int main(void)
{
	Date date1;
	cout<<"date1:";
	date1.print_ymd();
	Date date2(2006);
	cout<<"date2.:";
	date2.print_ymd();
	Date date3(2006, 4);
	cout<<"date3.:";
	date3.print_ymd();
	Date date4(2006, 4, 8);
	cout<<"date4.:";
	date4.print_ymd();
	Date date5(2006, 14, 8);
	cout<<"date5.:";
	date5.print_ymd();
    return 0;
}