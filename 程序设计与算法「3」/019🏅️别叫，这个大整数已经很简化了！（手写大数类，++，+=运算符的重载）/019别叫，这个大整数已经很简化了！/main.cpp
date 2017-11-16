//
//  main.cpp
//  019别叫，这个大整数已经很简化了！
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

const int MAX = 110;

class CHugeInt {
	// 在此处补充你的代码
private:
	char num[2*MAX];
public:
	//这个想法很好
	void reverse(char *s){
		int len = (int)strlen(s);
		int left = 0, right = len-1;
		while(left <= right){
			swap(s[left++], s[right--]);
		}
	}
	//反向存储便于求解
	CHugeInt(char *s){
		memset(num, 0, sizeof(num));
		strcpy(num, s);
		reverse(num);
	}
	CHugeInt(int n){
		memset(num, 0, sizeof(num));
		sprintf(num, "%d", n);
		reverse(num);
	}
	//运算实现
	CHugeInt operator+(const CHugeInt& b){
		CHugeInt temp(0);
		int up = 0;
		for(int i=0;i<2*MAX;i++){
			int c1 = num[i];
			int c2 = b.num[i];
			if(c1 == 0 && c2 == 0 && up == 0){
				break;
			}
			if(c1 == 0) c1 = '0';
			if(c2 == 0) c2 = '0';
			int k = (c1 - '0') + (c2 - '0') + up;
			if(k >= 10){
				up = 1;
				temp.num[i] = k - 10 + '0';
			}else{
				up = 0;
				temp.num[i] = k + '0';
			}
		}
		return temp;
	}
	//通过类型转换， 重用刚才写好的重载代码
	CHugeInt operator+(int n){
		return *this + CHugeInt(n);
	}
	friend ostream& operator<<(ostream& o, const CHugeInt& b){
		int len = (int)strlen(b.num);
		for(int i=len-1;i>=0;i--){
			o<<b.num[i];
		}
		return o;
	}
	//难点1
	friend CHugeInt operator+(int n, CHugeInt& b){
		return b+n;
	}
	//同样做到了代码重用
	CHugeInt& operator+=(int n){
		*this = *this + n;
		return *this;
	}
	CHugeInt& operator++(){
		*this = *this + 1;
		return *this;
	}
	//难点2
	CHugeInt operator++(int n){
		CHugeInt temp(*this);
		*this = temp + 1;
		return temp;
	}
};

int  main()
{
	char s[210];
	int n;
	
	while (cin >> s >> n) {
		CHugeInt a(s);
		CHugeInt b(n);
		cout << a + b << endl;
		cout << n + a << endl;
		cout << a + n << endl;
		b += n;
		cout  << ++ b << endl;
		cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}
