//
//  GradeBook.hpp
//  GradeBook
//
//  Created by Jack Lee on 15/10/2017.
//  Copyright © 2017 SJH. All rights reserved.
//

#ifndef GradeBook_hpp
#define GradeBook_hpp

#include <string>
#include <stdio.h>
using std::string;

class GradeBook
{
public:
	GradeBook(string);
	void setCourseName(string);
	string getCourseName();
	void displayMessage();
private:
	string courseName;
};

#endif /* GradeBook_hpp */
