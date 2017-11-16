//
//  main.cpp
//  017惊呆！Point竟然能这样输入输出
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point() { };
	friend istream& operator>>(istream& i, Point &p){
		int a, b;
		i>>a>>b;
		p.x = a;
		p.y = b;
		return i;
	}
	friend ostream& operator<<(ostream& o, const Point &p){
		o<<p.x<<","<<p.y;
		return o;
	}
};
int main()
{
	Point p;
	while(cin >> p) {
		cout << p << endl;
	}
	return 0;
}
