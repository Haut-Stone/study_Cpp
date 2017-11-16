//
//  main.cpp
//  016看上去好坑的运算符重载
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;

class MyInt
{
	int nVal;
public:
	MyInt( int n) { nVal = n ;}
	MyInt& operator-(const int &n){
		nVal -= n;
		return *this;
	};
	//重点
	operator int(){
		return nVal;
	}
};

int Inc(int n) {
	return n + 1;
}

int main () {
	int n;
	while(cin >>n) {
		MyInt objInt(n);
		objInt-2-1-3;
		cout << Inc(objInt);
		cout <<",";
		objInt-2-1;
		cout << Inc(objInt) << endl;
	}
	return 0;
}
