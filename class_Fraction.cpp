/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 17:27:43
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-09 17:51:01
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

class Fraction
{
private:
	int divisor(int p, int q);
protected:
	int a;//分子
	int b;//分母
public:
	void set(int aa, int bb);
	void show();
	Fraction add(Fraction u);//加一个分数
};


void Fraction::set(int aa, int bb){
	a = aa;
	if (bb!=0){
		b = bb;
	}else{
		a = 0;
		b = 1;
	}
}

void Fraction::show(){
	cout<<a<<"/"<<b;
}

Fraction Fraction::add(Fraction u){
	int temp;
	Fraction v;
	v.a = a*u.b + b*u.a;
	v.b = b*u.b;
	temp = divisor(v.a, v.b);
	v.a = v.a/temp;
	v.b = v.b/temp;
	return v; 
}

int Fraction::divisor(int a, int b){
	int c = a%b;
	while(c){
		a = b;
		b = c;
		c = a%b;
	}
	return b;
}
	
class Real:public Fraction
{
public:
	void show_real(){
		cout<<a<<'/'<<b<<'='<<a/(double)b<<endl;
	}
};
int main(void)
{
    return 0;
}