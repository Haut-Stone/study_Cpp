// Debugging: Student.cpp

#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstring>

#include "Student.h"

#include <new>
int Student::numStudents = 0;

// constructor
Student::Student( const char *nPtr )
{
   grades = new int[ 1 ];
   grades[ 0 ] = 0;
   name = new char[ strlen( nPtr ) + 1 ];
   strcpy( name, nPtr );
   numGrades = 0;
   numStudents++;

   cout << "A student has been added\n";
} // end class Student constructor

// destructor
Student::~Student()
{
   cout << name << " has been deleted\n";
   delete grades;
   delete name;
   numStudents--;
} // end class Student destructor

// function displayGrades definition
void Student::displayGrades() const
{
   cout << "Here are the grades for " << name << endl;
   
   // output each grade
   for ( int i = 0; i < numGrades; i++ )
      cout << setw( 5 ) << grades[ i ];

   cout << endl << endl;
} // end function displayGrades

// function addGrade definition
Student& Student::addGrade( int grade )
{
   int *temp = new int[ numGrades + 1 ];
   
   for ( int i = 0; i < numGrades; i++ )
      temp[ i ] = grades[ i ];

   temp[ numGrades ] = grade;
   grades = temp;
   numGrades++;

   return *this;
} // end function addGrade

// function getNumStudents definition
int Student::getNumStudents()
{
   return numStudents;
} // end function getNumStudents


/**************************************************************************
 * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
