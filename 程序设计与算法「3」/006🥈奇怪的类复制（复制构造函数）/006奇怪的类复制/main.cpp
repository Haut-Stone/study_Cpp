//
//  main.cpp
//  006奇怪的类复制
//
//  Created by Jack Lee on 13/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	// 在此处补充你的代码
	Sample(){};
	Sample(int n):v(n){};
	//复制构造函数
	Sample(const Sample &x){
		v = 2 + x.v;
	}
};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);
	Sample b = a;//主要考查了复制构造函数,这里的等于号代表初始化，而不是赋值
	PrintAndDouble(b);
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}
