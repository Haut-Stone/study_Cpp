/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-11 20:55:10
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-12 16:59:32
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;


class Person{
private:
	char *name;
	char sex;
	char pid[19];
	int weight;
	int high;
public:
	Person();
	Person(char *n, char s, char *p, int w, int h);//有参的构造函数
	void change_data(char *n, char s, char *p, int w, int h);
	void walking(int k, int v);
	void hearing(char *sentence);//将字符串大小写互换后输出
	void speek(int n);
	void writing();//画出’曲‘
	void print();
	void out(int a);//翻译小鱼1000的整数
	~Person();
};

void Person::walking(int k, int v){
	cout<<'\n'<<name;
	for (int i=0;i<k;i++){
		cout<<' '<<"o_o";
		cout<<"\b\b\b";
	}
}

class Date{
private:
protected:
	int year;
	int month;
	int day;
public:
	Date(){year = 1900, month = day = 1;}
	void init(int ,int ,int );
	void print_ymd();
	void print_mdy();
};

int main(void)
{

    return 0;
}