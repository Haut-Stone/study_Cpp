//
//  main.cpp
//  002难一点的swap
//
//  Created by Jack Lee on 13/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int* &a, int * &b)
{
	int * tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 3,b = 5;
	int * pa = & a;
	int * pb = & b;
	swap(pa,pb);
	cout << *pa << "," << * pb;
	return 0;
}
