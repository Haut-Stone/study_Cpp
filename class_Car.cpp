/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-09 20:51:39
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-10-12 22:30:05
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;


class automobile{
private:
	char type[20];
	char color[20];
	float price;
	int carry_weight;
	int carry_customer;
public:
	void set_data(char *t, char *c, float pri, int cw, int cc);
	void movecar(int l, int k);
	void horming(int num);
	void downcar(int l);
	void play_mp3(char *ps);
	char *show_type(){
		return type;
	}
};

int main(void)
{

    return 0;
}