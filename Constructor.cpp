/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 23:13:06
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-09 23:52:56
*/
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
	//构造函数
	Date(int y = 1900, int m = 1, int d = 1){
	 	year = y;
	 	month = m;
	 	day = d;
	}
	//重载构造函数
	//TODO
	// Date():year(1900), month(1), day(1){}
	// Date(int yy, int mm = 1, int dd= 1);
	// Date(Date &d):year(d.year), month(d.month), day(d.day){}
	// Date(char *ps);
	void init(int,int,int);
	void print_ymd();
	void print_mdy();
};

void Date::init(int yy, int mm, int dd){
	month = (mm >= 1 && mm <= 12) ? mm:1;
	year  = (yy >=1900 && yy <= 9999) ? yy:1900;
	day = (dd>=1 && dd<=31) ? dd:1; 
}

void Date::print_ymd(){
	cout<<year<<'-'<<month<<'-'<<day<<endl;
}

void Date::print_mdy(){
	cout<<month<<'-'<<day<<'-'<<year<<endl;
}

int main(void)
{
	Date date1;
	date1.print_ymd();
	date1.init(2006, 3, 28);
	date1.print_ymd();
	Date date2(2013, 11, 26);
	date2.print_mdy();
	date2.init(2006, 13, 38);
	date2.print_ymd();
    return 0;
}