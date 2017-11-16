//
//  main.cpp
//  004神秘的数组初始化
//
//  Created by Jack Lee on 13/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
	//佩服，佩服
	int * a[] = {nullptr, nullptr, new int, new int[6]};
	
	*a[2] = 123;
	a[3][5] = 456;
	if(! a[0] ) {
		cout << * a[2] << "," << a[3][5];
	}
	return 0;
}
