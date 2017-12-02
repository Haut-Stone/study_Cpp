// Debugging: debugging.cpp

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "Decimal.h"

int main()
{
   Decimal test1;  
   Decimal test2;
   Decimal test3( 1.234 );

   cout << "Initial values:\n"
        << test1 << endl << test2 << endl << test3 
        << endl << endl;

   cin >> test1 >> test2;

   cout << "The sum of test1 and test2 is: "
        << test1 + test2 << endl;
   test3 += test1++ + ++test2;

   cout << "\nfinal values:\n"
        << "test1 = " << test1 << endl
        << "test2 = " << test2 << endl
        << "test3 = " << test3 << endl;

   if ( test1 != test3 )
      cout << "test1 and test3 are not equal to each other\n";

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
