/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-11 20:37:51
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-11 20:42:26
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;


class Test{
private:
	int x;
public:
	Test(int = 0);
	void print();
};

Test::Test(int a){
	x = a;
}

void Test::print(){
	cout<<"   x="<<x<<endl;
	cout<<"this->x="<<this->x<<endl;
	cout<<"(*this).x="<<(*this).x<<endl;
}

int main(void)
{
	Test testObj(12);
	testObj.print();
    return 0;
}