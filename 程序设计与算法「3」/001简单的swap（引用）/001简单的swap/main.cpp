//
//  main.cpp
//  001简单的swap
//
//  Created by Jack Lee on 13/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//
#include <iostream>
using namespace std;

class A
{
public:
	int x;
	int getX(){
		return x;
	}
};

void swap(A &a, A &b)
{
	int tmp = a.x;
	a.x = b.x;
	b.x = tmp;
}

int main(void)
{
	A a, b;
	a.x = 3;
	b.x = 5;
	swap(a, b);
	cout<<a.getX()<<","<<b.getX();
	return 0;
}
