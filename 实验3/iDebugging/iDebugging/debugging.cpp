// Debugging: debugging.cpp

#include <iostream>

using std::cout;
using std::endl;

#include "Student.h"

int main() 
{
	cout << "There are currently " << Student::getNumStudents()
        << " students\n\n";

   Student *s1Ptr = new Student( "Student 1" );

   s1Ptr->addGrade( 100 ).addGrade( 75 ).addGrade( 89 );
   s1Ptr->displayGrades();

   Student *s2Ptr = new Student( "Student 2" );
   s2Ptr->addGrade( 83 ).addGrade( 92 );
   s2Ptr->displayGrades();

   Student s3( "Student 3" );
   s3.addGrade( 62 ).addGrade( 91 ).displayGrades();

	cout << "There are currently " << Student::getNumStudents()
        << " students\n\n";

	delete s2Ptr;
   delete s1Ptr;
   return 0;
} // end main


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
