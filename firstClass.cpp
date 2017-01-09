/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 16:30:41
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-09 17:23:07
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

class Clock
{
private://数据成员一般私有
	float Price;
public:
	void Set(int h, int m, int s, float p);
	void Run();
	void Report_Time();
	void Show_Time(){
		printf("%d:%d:%d\n", Hour, Minute, Second);
	}
protected:
	int Hour;
	int Minute;
	int Second;
};

void Clock::Set(int h, int m, int s, float p){
	Hour = h;
	Minute = m;
	Second = s;
	Price = p;
}

void Clock::Run(){
	for(int i=0;i<10;i++){
		Second++;
		if(Second == 60){
			Second = 0;
			Minute++;
			if(Minute == 60){
				Minute = 0;
				Hour++;
				if(Hour == 24){
					Hour = 0;
				}
			}
		}
		cout<<'\r';
		Show_Time();
	}
}

void Clock::Report_Time(){
	Show_Time();
	if(Minute == 0 && Second == 0){
		for(int i=0;i<Hour;i++){
			cout<<"\007";
		}
	}
}

class date:public Clock
{
private:
	int year, month, day;
public:
	void show_dete_time(){
		cout<<year<<'-'<<month<<'-'<<day<<'\n';
		cout<<Hour<<':'<<Minute<<':'<<Second<<'\n';
	}
};
int main(void)
{
	Clock myClock;
	myClock.Set(9, 59, 50, 1000);
	myClock.Run();
	myClock.Report_Time();
    return 0;
}