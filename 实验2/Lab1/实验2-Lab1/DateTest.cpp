// Lab 2: DateTest.cpp
#include <iostream> 
using std::cout; 
using std::endl; 

#include "Date.h" // include definitions of class Date

int main()
{
   const int MAXDAYS = 16;
   Date d( 12, 24, 2004 ); // instantiate object d of class Date

   // output Date object d's value
   for ( int loop = 1; loop <= MAXDAYS; ++loop ) 
   {
      d.print(); // invokes function print
      /* Write call to nextDay */
		d.nextDay();
   } // end for

   cout << endl;
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
