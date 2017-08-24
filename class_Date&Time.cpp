/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 20:38:33
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-06-08 20:00:06
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

//日期类
class Date{
private:
	int year;
	int month;
	int day;
public:
	void init_date(int,int,int);
	void print_ymd();
	void print_mdy();
	int get_year(){
		return year;
	}
	int get_month(){
		return month;
	}
	int get_day(){
		return day;
	}

};

//时间类
class Time{
private:
	int hour;
	int minute;
	int second;
public:
	void init_time(int,int,int);
	void print_hms();
	int get_hour(){
		return hour;
	}
	int get_minute(){
		return minute;
	}
	int get_second(){
		return second;
	}
};

//日期时间类
class DateTime:public Date, Time{
public:
	void init_dateTime(int y, int m, int d, int h, int mi, int s){
		init_date(y,m,d);
		init_time(h,mi,s);
	}
	void show(){
		print_ymd();
		print_hms();
	}
};

int main(void)
{

    return 0;
}