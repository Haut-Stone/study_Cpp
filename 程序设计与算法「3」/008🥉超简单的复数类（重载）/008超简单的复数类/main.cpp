//
//  main.cpp
//  008超简单的复数类
//
//  Created by Jack Lee on 13/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
	double r,i;
public:
	void Print() {
		cout << r << "+" << i << "i" << endl;
	}
	Complex& operator = (const char *p){
		r = p[0] - '0';
		i = p[2] - '0';
		return *this;
	}
	
};
int main() {
	Complex a;
	a = "3+4i"; a.Print();
	a = "5+6i"; a.Print();
	return 0;
}
