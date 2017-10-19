//
//  main.cpp
//  GradeBook
//
//  Created by Jack Lee on 15/10/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.hpp"

int main(void)
{
	GradeBook gradeBook1("CS101 Introduction to Programming in C++");
	GradeBook gradeBook2("CS102 C++ Data Structers");
	cout<<"gradeBook1 created for course: "<<gradeBook1.getCourseName()<<
	"\ngradeBook2 created for course: "<<gradeBook2.getCourseName()<<endl;
	
	gradeBook1.setCourseName("CS101 C++ Programming");
	
	cout<<"\ngradebook1's course name is: "
	<<gradeBook1.getCourseName()
	<<"\ngradebook2's course name is: "
	<<gradeBook2.getCourseName()
	<<endl;
	return 0;
}
