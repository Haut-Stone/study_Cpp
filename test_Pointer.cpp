/*
* Created by ShiJiahuan(li) in haut.
* for more please visit www.shallweitalk.com
* 
* Copyright 2016 SJH. All rights reserved.
*
* @Author: Haut-Stone
* @Date:   2017-01-19 12:14:59
* @Last Modified by:   Haut-Stone
* @Last Modified time: 2017-01-19 22:26:10
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

/*
	由于借的这几本书，每一本的内容量都大的惊人，所以，这几天来回的翻阅，让我的思路没有了导向，感觉什么都可以做。
又什么都做不了。。。（狗带）所以今天决心，先不管其他的什么数据结构与算法之类的，先全心全意解决这本《C和指针》先。
那么。。。剩下的时间，都要用来重新过一遍c语言了，加油啊，亲们！（笔芯）。😆

以下为正文。
 */

//关于宏定义，是不是可以用作调试呢？还是有别的用处？

void testa()
{
	//条件编译，用于函数中的调试
	#if 0
	printf("nihao\n");

	#endif
	printf("testa\n");
	//let`s begin with 5 vars
	int a = 112; 
	int b = -1;
	float c = 3.14;
	int *d = &a;
	int *e = &b;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%f\n", c);
	// printf("%d\n", d);//output the address,so have warning
	// printf("%d\n", e);
	printf("%d\n", *d);//output the value
	printf("%d\n", *e);
}

void testb()
{
	// int *a;//a can`t be use without init.<Segmentation fault>
	// *a = 12;
}

void testc()
{
	printf("testc\n");
	int a = 12;
	int *b = &a;
	int **c = &b;//pointer`s pointer
	int *d = b;//d is a copy if b, not a pointer to b.<important>
	printf("%d\n", a);
	printf("%d\n", *b);
	printf("%d\n", **c);
	printf("%d\n", *d);
}

void testd()
{
	printf("testd\n");
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int *ptr = a+2;
	for(int i=0;i<10;i++){
		printf("%d ", i[a]);//amazing!! a[i] == i[a] because *(a + (i)) = *(i + (a))
	}
	printf("\n");
	printf("%d\n", *(ptr + 2));
	printf("%d\n", *(ptr + 9));//attention !! out !!
}

void teste()
{
	printf("teste\n");
	//use indexing is different with use pointer, and pointer may batte than indexing
	//To the machine not humanbeings.... 
	int array[10];
	for(int i=0;i<10;i++){
		array[i] = 0;//do some extral job to solve the i`s number....
	}

	int rom[10];
	int *ptr;
	for(ptr = rom;ptr < rom+10;ptr++){
		*ptr = 0;//better than indexing
	}
}

void testf()
{	
	printf("testf\n");
	int a[10], *p1;
	p1 = a;
	//If you want to know how to make a pointer to 2D array....
	//look...
	int b[10][10];
	int (*p2)[10];//just like this!!
	p2 = b;

}
int main(void)
{
	//那么亲们就从指针开始吧。
	testa();
	testb();
	testc();//pointer`s pointer
	testd();//pointer and array
	teste();//compare indexing and pointer...
	testf();
    return 0;
}