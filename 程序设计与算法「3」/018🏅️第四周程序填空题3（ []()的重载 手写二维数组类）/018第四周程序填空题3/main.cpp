//
//  main.cpp
//  018第四周程序填空题3
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

//这题还是很强的，给块金牌吧,给出老师的解释
/*
 用一维数组来存放二维数组
 a[i][j]的计算过程从左到右，
 a[i] 的返回值是个指针，
 指向第 i 行的首地址。
 a[i][j] 就会是第 i 行第 j 个元素了。
 */
#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
private:
	int* p;
	int r, c;
public:
	Array2(){p = NULL;};
	Array2(int row, int col):r(row), c(col){
		p = new int [r*c];
	};
	//复制构造函数
	Array2(Array2& a):r(a.r), c(a.c){
		p = new int [r*c];
		memcpy(p, a.p, sizeof(int)*r*c);
	};
	//重载等于号
	Array2& operator=(const Array2& a){
		if(p){
			delete [] p;
		}
		r = a.r;
		c = a.c;
		p = new int [r*c];
		memcpy(p, a.p, sizeof(int)*r*c);
		return *this;
	};
	//析构时删除空间
	~Array2(){
		if(p){
			delete []p;
		}
	};
	//难点
	int* operator[](int i){
		return p + i * c;
	};
	//难点
	int& operator()(int i, int j){
		return p[i * c + j];
	};
};

int main() {
	Array2 a(3,4);
	int i,j;
	for(  i = 0;i < 3; ++i )
		for(  j = 0; j < 4; j ++ )
			a[i][j] = i * 4 + j;
	for(  i = 0;i < 3; ++i ) {
		for(  j = 0; j < 4; j ++ ) {
			cout << a(i,j) << ",";
		}
		cout << endl;
	}
	cout << "next" << endl;
	Array2 b;     b = a;
	for(  i = 0;i < 3; ++i ) {
		for(  j = 0; j < 4; j ++ ) {
			cout << b[i][j] << ",";
		}
		cout << endl;
	}
	return 0;
}
