//
//  main.cpp
//  012编程填空：统计动物数量
//
//  Created by Jack Lee on 14/11/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal
{
public:
	static int number;
	Animal(){
		number++;
	}
	virtual ~Animal(){
		number--;
	}
	Animal(const Animal &a){
		number++;
	}
};

class Dog:public Animal
{
public:
	static int number;
	Dog(){
		number++;
	}
	~Dog(){
		number--;
	}
	Dog(const Dog &a){
		number++;
	}
};

class Cat:public Animal
{
public:
	static int number;
	Cat(){
		number++;
	}
	~Cat(){
		number--;
	}
	Cat(const Cat &a){
		number++;
	}
};

int Animal::number = 0;
int Dog::number = 0;
int Cat::number = 0;

void print() {
	cout << Animal::number << " animals in the zoo, " << Dog::number << " of them are dogs, " << Cat::number << " of them are cats" << endl;
}


int main() {
	print();
	Dog d1, d2;
	Cat c1;
	print();
	Dog* d3 = new Dog();
	Animal* c2 = new Cat;
	Cat* c3 = new Cat;
	print();
	delete c3;
	delete c2;
	delete d3;
	print();
}
