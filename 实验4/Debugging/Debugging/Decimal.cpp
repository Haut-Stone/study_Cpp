// Debugging: Decimal.cpp

#include <iostream>

using std::cout;
using std::cin;

#include <cmath>

#include "Decimal.h"

// constructor
Decimal::Decimal( double n )
{
   decimal = modf( n, &integer );
} // end class Decimal constructor

// function operator<< definition
ostream& operator<<(ostream& output, const Decimal &d )
{
   double n = 0;

   n = floor( d.decimal * 100 );

   if ( n < 0 )
      n = -n;

   if ( d.decimal != 0 ) {
      output << floor( d.integer ) << ".";

      if ( n > 10 )
         output << n;
      else
         output << "0" << n;
   } // end if 
   else
      output << d.integer;

	return output;
} // end function operator<<

// function operator>> definition
istream& operator>>( istream& input, Decimal &d )
{
   double n;
   cout << "Enter a number: ";
   input >> n;
   d.decimal = modf( n, &d.integer );
   return input;
} // end function operator>>

// function operator= definition
Decimal &Decimal::operator=( const Decimal d )
{
   integer = d.integer;
   decimal = d.decimal;

   return *this;
} // end function operator=

// function setDecimal definition
void Decimal::setDecimal( double d )
{
   decimal = d;
} // end function setDecimal

// function setInteger definition
void Decimal::setInteger( double i )
{
   integer = i;
} // end function setInteger

// function operator+ definition
Decimal Decimal::operator+( Decimal d )
{
   Decimal result;

   result.setDecimal( decimal + d.decimal );
   result.setInteger( integer + d.integer );

   if ( result.decimal >= 1 )
   {
      result.decimal--;
      result.integer++;

   } // end if
   else if ( result.decimal <= -1 )
   {
      result.decimal++;
      result.integer--;
   } // end if

   return result;
} // end function operator+

// function operator+= definition
Decimal Decimal::operator+=( Decimal d )
{
   *this = *this + d;
   return *this;
} // end function operator+=

// function operator++ definition
Decimal &Decimal::operator++()
{
   integer += 1.0;
   return *this;
} // end function operator++

// function operator++ definition
Decimal Decimal::operator++( int k)
{
   Decimal temp = *this;
   integer += 1.0;
   return temp;
} // end function operator++

// function operator== definition
bool Decimal::operator!=( const Decimal d )
{
   return !( integer == d.integer && decimal == d.decimal );
} // end function operator==


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
