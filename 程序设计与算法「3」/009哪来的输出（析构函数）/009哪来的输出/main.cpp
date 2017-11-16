//
//  main.cpp
//  009哪来的输出
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;
class A {
public:
	int i;
	A(int x) { i = x; }
	~A(){
		cout<<i<<endl;
	}
};
int main()
{
	A a(1);
	A * pa = new A(2);
	delete pa;
	return 0;
}
