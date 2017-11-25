// Lab 2: IntegerSet.cpp
// Member-function definitions for class IntegerSet.
#include <iostream> 
using std::cout; 
using std::cin; 
using std::cerr;

#include <iomanip> 
using std::setw; 

/* Write include directive for IntegerSet.h here */
#include "IntegerSet.h"

// constructor creates a set from array of integers
IntegerSet::IntegerSet( int array[], int size)
{
   emptySet();

   for ( int i = 0; i < size; i++ )
      insertElement( array[ i ] );
} // end IntegerSet constructor

/* Write a definition for emptySet */
void IntegerSet::emptySet()
{
	for(int i=0;i<=100;i++){
		set[i] = 0;
	}
}

// input a set from the user
void IntegerSet::inputSet()
{
   int number;

   do 
   {
      cout << "Enter an element (-1 to end): ";
      cin >> number;

      if ( validEntry( number ) )
         set[ number ] = 1;
      else if ( number != -1 )
         cerr << "Invalid Element\n";
   } while ( number != -1 ); // end do...while

   cout << "Entry complete\n";
} // end function inputSet

// prints the set to the output stream
void IntegerSet::printSet() const
{
   int x = 1;
   bool empty = true; // assume set is empty
   
   cout << '{';

   for (int u = 0; u < 101; u++ )
   {
      if ( set[ u ] ) 
      {
         cout << setw( 4 ) << u << ( x % 10 == 0 ? "\n" : "" );
         empty = false; // set is not empty
         x++;
      } // end if
   } // end for

   if ( empty )
      cout << setw( 4 ) << "---"; // display an empty set
		
   cout << setw( 4 ) << "}" << '\n';
} // end function printSet

// returns the union of two sets
IntegerSet IntegerSet::unionOfSets( const IntegerSet &r )
{
   IntegerSet temp;

   // if element is in either set, add to temporary set
   for ( int n = 0; n < 101; n++ )
      if ( set[ n ] == 1 || r.set[ n ] == 1 )
         temp.set[ n ] = 1;

   return temp;
} // end function unionOfSets

/* Write definition for intersectionOfSets */
IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& r)
{
	IntegerSet temp;
	for ( int n = 0; n < 101; n++ )
		if ( set[ n ] == 1 && r.set[ n ] == 1 )
			temp.set[ n ] = 1;
	
	return temp;
}

// insert a new integer into this set
void IntegerSet::insertElement( int k )
{
   if ( validEntry( k ) )
      set[ k ] = 1;
   else
      cerr << "Invalid insert attempted!\n";
} // end function insertElement

/* Write definition for deleteElement */
void IntegerSet::deleteElement(int n)
{
	for(int i=0;i<101;i++){
		if(i == n){
			set[i] = 0;
			break;
		}
	}
}
/* Write definition for isEqualTo */

// determines if two sets are equal
bool IntegerSet::isEqualTo( const IntegerSet &r ) const
{
   for ( int v = 0; v < 101; v++ )
      if ( set[ v ] != r.set[ v ] )
         return false; // sets are not-equal

   return true; // sets are equal
} // end function isEqualTo


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
