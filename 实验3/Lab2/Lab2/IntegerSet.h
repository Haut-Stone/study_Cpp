// Lab 2: IntegerSet.h
// Header file for class IntegerSet
#ifndef INTEGER_SET_H
#define INTEGER_SET_H

class IntegerSet 
{
public:  
   // default constructor
   IntegerSet() 
   { 
      /* Write call to emptySet */
	   emptySet();
   } // end IntegerSet constructor

   IntegerSet( int [], int ); // constructor that takes an initial set
   IntegerSet unionOfSets( const IntegerSet& );
   /* Write a member funcion prototype for intersectionOfSets */
	IntegerSet intersectionOfSets(const IntegerSet&);
   void emptySet(); // set all elements of set to 0
   void inputSet(); // read values from user
   void insertElement( int );
   /* Write a member function prototype for deleteElement */
	void deleteElement(int);
	void printSet() const;
   /* Write a member function prototype for isEqualTo */
	bool isEqualTo(const IntegerSet&) const;
private:
   int set[ 101 ]; // range of 0 - 100

   // determines a valid entry to the set
   int validEntry( int x ) const 
   { 
      return ( x >= 0 && x <= 100 ); 
   } // end function validEntry
}; // end class IntegerSet

#endif


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
