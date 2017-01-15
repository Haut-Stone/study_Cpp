/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-15 22:18:29
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-15 22:28:40
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace std;


int main(void)
{
	ofstream out("text.txt");//定义一个对象
	if(!out){
		cout<<"文件打开失败"<<endl;
		return 1;
	}
	out<<"welcome to my test"<<endl;
	out.close();

	ifstream in("text.txt");
	if(!in){
		cout<<"文件打开失败"<<endl;
		return 1;
	}
	char ch[80];
	in>>ch;
	cout<<ch;
	in>>ch;
	cout<<ch;
	in.close();
    return 0;
}