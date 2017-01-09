/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 22:51:26
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-09 23:08:18
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;



class Info{
private:
	int Id;
	char Name[20];
	int Programming;
	int Network;
	int Datebase;
	int Total;
public:
	void Set_Info(int id, char *name, int programming, int network, int database);
	int Get_Pro();
	int Get_Net();
	int Get_Dat();
	int Get_Tol();
	void Show();
};

void Info::Set_Info(int id, char *name, int programming, int network, int database){
	Id = id;
	strcpy(Name, name);
	Programming = programming;
	Network = network;
	Datebase = database;
	Total = programming + network + database;
}

void Info::Show(){
	cout<<Id<<"\t";
	cout<<Name<<"\t";
	cout<<Programming<<"\t";
	cout<<Network<<"\t";
	cout<<Datebase<<"\t";
	cout<<Total<<endl;
}





int main(void)
{

    return 0;
}