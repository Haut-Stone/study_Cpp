//
//  main.cpp
//  013这个指针哪来的
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;

struct A
{
	int v;
	A(int vv):v(vv) { }
	const A* getPointer() const {
		return this;
	}
};

int main()
{
	const A a(10);
	const A * p = a.getPointer();
	cout << p->v << endl;
	return 0;
}
