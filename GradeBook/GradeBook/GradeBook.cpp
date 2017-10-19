//
//  GradeBook.cpp
//  GradeBook
//
//  Created by Jack Lee on 15/10/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include "GradeBook.hpp"
#include <iostream>
using std::cout;
using std::endl;

GradeBook::GradeBook(string name){
	setCourseName(name);
}

void GradeBook::setCourseName(string name){
	if(name.length() <= 25){
		courseName = name;
	}else{
		courseName = name.substr(0, 25);
		cout<<"Name \""<<name<<"\" exceeds maximum length(25).\n"<<
		"Limting courseName to first 25 characters.\n"<<endl;
	}
}

string GradeBook::getCourseName(){
	return courseName;
}

void GradeBook::displayMessage(){
	cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
}
