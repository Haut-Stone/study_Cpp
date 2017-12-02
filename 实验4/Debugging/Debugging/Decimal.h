// Debugging: Decimal.h

#ifndef DECIMAL_H
#define DECIMAL_H

#include <iostream>

using std::ostream;
using std::istream;

// class Decimal definition
class Decimal
{
public:
	friend ostream& operator<<( ostream&, const Decimal & );
   Decimal( double = 0.0 );

   void setInteger( double );
   void setDecimal( double );

   Decimal &operator=( const Decimal );
   Decimal operator+( Decimal );
   Decimal operator+=( Decimal );
   Decimal &operator++();
   Decimal operator++( int );
   bool operator!=( const Decimal );
private:
   double integer;
   double decimal;
	friend istream& operator>>( istream&, Decimal & );
}; // end class Decimal

#endif // DECIMAL_H


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
