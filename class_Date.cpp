/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 17:53:39
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-09 20:27:09
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <cstring>
using namespace std;

class Date
{
private:
	int year, month, day;
	void SetSystemDate();
protected:

public:
	void init(int,int,int);
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
	bool isLeapYear();
};

void Date::SetSystemDate(){
	//取得系统时间
	tm *gm;//tm是时间（含年月日，时分秒）的结构体
	time_t t = time(NULL);//time_t是长整型，t是总秒数。
	gm = gmtime(&t);
	year = 1900 + gm->tm_year;
	month = gm->tm_mon + 1;
	day = gm->tm_mday;
}

void Date::init(int yy, int mm, int dd){
	if(yy>=1900 && yy<=9999){
		year = yy;
	}else{
		SetSystemDate();
		return;
	}
	if(mm>=1 && mm<=12){
		month = mm;
	}else{
		SetSystemDate();
		return;
	}
	if(dd>=1 && dd<=31){
		day = yy;
	}else{
		SetSystemDate();
		return;
	}
}

void Date::print_ymd(){
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}

void Date::print_mdy(){
	cout<<month<<"-"<<day<<"-"<<year<<endl;
}

bool Date::isLeapYear(){
	if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
		return true;
	}else{
		return false;
	}
}

int main(void)
{
	Date date1;
	date1.print_ymd();
	date1.init(2008, 3, 28);
	date1.print_ymd();
	Date date2;
	date2.init(2006, 13, 28);
	date2.print_mdy();
	if(date1.isLeapYear()){
		cout<<date1.get_year()<<"是闰年"<<endl;
	}else{
		cout<<date1.get_year()<<"不是闰年"<<endl;
	}
	return 0;
}