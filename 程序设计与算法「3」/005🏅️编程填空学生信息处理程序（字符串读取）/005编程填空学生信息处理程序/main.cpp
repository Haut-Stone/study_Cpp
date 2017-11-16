//
//  main.cpp
//  005编程填空学生信息处理程序
//
//  Created by Jack Lee on 13/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
public:
	void input(){
		string temp;
		string token;
		int flag = 1;
		getline(cin, temp);
		stringstream sstr(temp);
		stringstream temp2;
		while(getline(sstr, token, ',')){
			if(flag == 1){
				name = token;
			}else if(flag == 2){
				temp2 << token;
				temp2 >> age;
				temp2.clear();
			}else if(flag == 3){
				temp2 << token;
				temp2 >> studentID;
				temp2.clear();
			}else if(flag == 4){
				temp2 << token;
				temp2 >> firstYearAvg;
				temp2.clear();
			}else if(flag == 5){
				temp2 << token;
				temp2 >> secondYearAvg;
				temp2.clear();
			}else if(flag == 6){
				temp2 << token;
				temp2 >> thirdYearAvg;
				temp2.clear();
			}else if(flag == 7){
				temp2 << token;
				temp2 >> fourthYearAvg;
				temp2.clear();
			}
			flag++;
		}
	}
	void calculate(){
		avg = (double)(firstYearAvg+secondYearAvg+thirdYearAvg+fourthYearAvg)/4;
	}
	void output(){
		cout << name;
		cout << "," << age << "," << studentID << ",";
		cout << avg << "\n";
	}
private:
	string name;
	int age;
	long long studentID;
	int firstYearAvg;
	int secondYearAvg;
	int	thirdYearAvg;
	int fourthYearAvg;
	double avg;
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}
