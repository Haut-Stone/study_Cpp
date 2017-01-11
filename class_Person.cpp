/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-11 19:39:16
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-11 20:13:36
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;


class Person{
private:
	char Name[13];
	char Sex;
	int Age;
	char Pid[19];
	char *Addr;
public:
	Person(){
		strcpy(Name, "XXXX");
		Age = 0;
		Sex = ' ';
		strcpy(Pid, "XXXXXXXXXXXXXXXXXX");
		Addr = NULL;
	}
	Person(char *N, int A, char S, char *P, char *Ad){
		strcpy(Name, N);
		Age = A;
		Sex = S;
		strcpy(Pid, P);
		int L = (strlen(Ad));
		Addr = new char[L+1];//建立动态字符串
		strcpy(Addr, Ad);
	}
	~Person(){
		cout<<"now destroying Person:"<<Name<<endl;
		delete []Addr;//回收空间
	}
	void Register(char name[], int age, char sex, char pid[], char addr[]);
	void showMe();
};

void Person::Register(char name[], int age, char sex, char pid[], char addr[]){
	strcpy(Name, name);
	Age = age;
	Sex = sex;
	strcpy(Pid, pid);
	if (Addr != NULL) delete []Addr;
	int L=strlen(addr);
	Addr = new char[L+1];
	strcpy(Addr, addr);
}

void Person::showMe(){
	cout<<Name<<'\t'<<Age<<'\t'<<Sex<<'\t'<<Pid<<' ';
	if (Addr != NULL) cout<<Addr;
	cout<<endl;
}

int main(void)
{
	Person person1;
	cout<<"person1:\t";
	person1.showMe();
	person1.Register("zhang3", 19, 'm', "410727199807142349", "北京市海淀区");
	cout<<"person1:\t";
	person1.showMe();
    return 0;
}