//
//  main.cpp
//  020全面的myString
//
//  Created by Jack Lee on 15/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <cstdlib>
#include <iostream>
using namespace std;

//int strlen(const char * s)
//{	int i = 0;
//	for(; s[i]; ++i);
//	return i;
//}
//void strcpy(char * d,const char * s)
//{
//	int i = 0;
//	for( i = 0; s[i]; ++i)
//		d[i] = s[i];
//	d[i] = 0;
//
//}
int strcmp(const char * s1,const char * s2)
{
	for(int i = 0; s1[i] && s2[i] ; ++i) {
		if( s1[i] < s2[i] )
			return -1;
		else if( s1[i] > s2[i])
			return 1;
	}
	return 0;
}
//void strcat(char * d,const char * s)
//{
//	int len = strlen(d);
//	strcpy(d+len,s);
//}
class MyString
{
private:
	char* p;
public:
	
	// 在此处补充你的代码
	MyString(const char *s){
		int len = (int)strlen(s);
		p = new char[len + 1];
//		memcpy(p, s, sizeof(char)*(len+1));
		strcpy(p, s);
	}
	MyString(const MyString& s){
		int len = (int)strlen(s.p);
		p = new char[len+1];
//		memcpy(p, s.p, sizeof(char)*(len+1));
		strcpy(p, s.p);
	}
	MyString(){p = NULL;}
	~MyString(){
		if(p){
			delete [] p;
		}
	}
	friend ostream& operator<<(ostream& o, const MyString& s){
		if(s.p){
			int len = (int)strlen(s.p);
			for(int i=0;i<len;i++){
				o<<s.p[i];
			}
		}
		return o;
	}
	MyString operator+(const MyString& b){
		int len = (int)strlen(p);
		int len2 = (int)strlen(b.p);
		char* temp = new char[len+2+len2];
		strcpy(temp, p);
		strcat(temp, b.p);
		MyString res(temp);
		delete [] temp;
		return res;
	}
	MyString& operator=(const MyString& b){
		if(p){
			delete [] p;
		}
		int len = (int)strlen(b.p);
		p = new char(len+1);
//		memcpy(p, b.p, sizeof(char)*(len+1));
		strcpy(p, b.p);
		return *this;
	}
	char& operator[](const int index){
		return p[index];
	}
	void operator+=(const char* b){
		*this =  *this + MyString(b);
	}
	friend MyString operator+(const char* a, const MyString& b){
		MyString res = MyString(a) + b;
		return res;
	}
	bool operator<(const MyString& b){
		return strcmp(p, b.p) < 0;
	}
	bool operator==(const MyString& b){
		return strcmp(p, b.p) == 0;
	}
	bool operator>(const MyString& b){
		return strcmp(p, b.p) > 0;
	}
	MyString operator()(const int start, const int len) const{
		char* temp = new char[len+1];
		for(int i=start;i<start+len;i++){
			temp[i-start] = p[i];
		}
		temp[len] = '\0';
		MyString res(temp);
		delete [] temp;
		return res;
	}
};

int CompareString( const void * e1, const void * e2)
{
	MyString * s1 = (MyString * ) e1;
	MyString * s2 = (MyString * ) e2;
	if( * s1 < *s2 )
		return -1;
	else if( *s1 == *s2)
		return 0;
	else if( *s1 > *s2 )
		return 1;
	return 0;
}

int main()
{
	MyString s1("abcd-"),s2,s3("efgh-"),s4(s1);
	MyString SArray[4] = {"big","me","about","take"};
	cout << "1. " << s1 << s2 << s3<< s4<< endl;
	s4 = s3;
	s3 = s1 + s3;
	cout << "2. " << s1 << endl;
	cout << "3. " << s2 << endl;
	cout << "4. " << s3 << endl;
	cout << "5. " << s4 << endl;
	cout << "6. " << s1[2] << endl;
	s2 = s1;
	s1 = "ijkl-";
	s1[2] = 'A' ;
	cout << "7. " << s2 << endl;
	cout << "8. " << s1 << endl;
	s1 += "mnop";
	cout << "9. " << s1 << endl;
	s4 = "qrst-" + s2;
	cout << "10. " << s4 << endl;
	s1 = s2 + s4 + " uvw " + "xyz";
	cout << "11. " << s1 << endl;
	qsort(SArray,4,sizeof(MyString),CompareString);
	for( int i = 0;i < 4;i ++ )
		cout << SArray[i] << endl;
	//s1的从下标0开始长度为4的子串
	cout << s1(0,4) << endl;
	//s1的从下标5开始长度为10的子串
	cout << s1(5,10) << endl;
	return 0;
}
