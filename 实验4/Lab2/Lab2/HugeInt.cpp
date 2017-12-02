// Lab 2: Hugeint.cpp 
// HugeInt member-function and friend-function definitions.
#include <iostream>
using std::cout;
using std::endl;

#include <cctype> // isdigit function prototype
using std::isdigit;

#include <cstring> // strlen function prototype
using std::strlen;

#include "HugeInt.h" // HugeInt class definition

// default constructor; conversion constructor that converts
// a long integer into a HugeInt object
HugeInt::HugeInt( long value )
{
   // initialize array to zero
   for ( int i = 0; i <= 29; i++ )
      integer[ i ] = 0;   

   // place digits of argument into array 
   for ( int j = 29; value != 0 && j >= 0; j-- )
   {
      integer[ j ] = value % 10;
      value /= 10;
   } // end for
} // end HugeInt default/conversion constructor

// conversion constructor that converts a character string 
// representing a large integer into a HugeInt object
HugeInt::HugeInt( const char *string )
{
   // initialize array to zero
   for ( int i = 0; i <= 29; i++ )
      integer[ i ] = 0;

   // place digits of argument into array
   int length = (int)strlen( string );

   for ( int j = 30 - length, k = 0; j <= 29; j++, k++ )

      if ( isdigit( string[ k ] ) )
         integer[ j ] = string[ k ] - '0';

} // end HugeInt conversion constructor

// get function calculates length of integer
int HugeInt::getLength() const
{
	int i;//这里有一个错误，做了一下修改
   for (i = 0; i <= 29; i++ )
      if ( integer[ i ] != 0 )
         break; // break when first digit is reached
   
   return 30 - i; // length is from first digit (at i) to end of array
} // end function getLength

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+( const HugeInt &op2 ) const
{
   HugeInt temp; // temporary result
   int carry = 0;

   for ( int i = 29; i >= 0; i-- )
   {
      temp.integer[ i ] = 
         integer[ i ] + op2.integer[ i ] + carry;

      // determine whether to carry a 1
      if ( temp.integer[ i ] > 9 )
      {
         temp.integer[ i ] %= 10;  // reduce to 0-9
         carry = 1;
      } // end if
      else // no carry 
         carry = 0;
   } // end for

   return temp; // return copy of temporary object
} // end function operator+

// addition operator; HugeInt + int
HugeInt HugeInt::operator+( int op2 ) const
{ 
   // convert op2 to a HugeInt, then invoke 
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 ); 
} // end function operator+

// addition operator;
// HugeInt + string that represents large integer value
HugeInt HugeInt::operator+( const char *op2 ) const 
{ 
   // convert op2 to a HugeInt, then invoke 
   // operator+ for two HugeInt objects
   return *this + HugeInt( op2 ); 
} // end function operator+

// equality operator; HugeInt == HugeInt
/* Write a definition for the == operator */
bool HugeInt::operator==(const HugeInt& b) const
{
	int len1 = getLength();
	int len2 = b.getLength();
	if(len1 == len2){
		for(int i=30-len1;i<30;i++){
			if(integer[i] != b.integer[i]){
				return false;
			}
		}
		return true;
	}else{
		return false;
	}
}

// inequality operator; HugeInt != HugeInt
/* Write a definition for the != operator
   by calling the == operator */
bool HugeInt::operator!=(const HugeInt& b) const
{
	if(*this == b){
		return false;
	}else{
		return true;
	}
}

// less than operator; HugeInt < HugeInt
/* Write a definition for the < operator */
bool HugeInt::operator<(const HugeInt& b) const
{
	int len1 = getLength();
	int len2 = b.getLength();
	if(len1 == len2){
		for(int i=30-len1;i<30;i++){
			if(integer[i] > b.integer[i]){
				return false;
			}else if(integer[i] < b.integer[i]){
				return true;
			}
		}
		return false;
	}else if(len1 < len2){
		return true;
	}else{
		return false;
	}
}

// less than or equal operator; HugeInt <= HugeInt
/* Write a definition for the <= operator
   by calling the < and == operators */
bool HugeInt::operator<=(const HugeInt& b) const
{
	if(*this == b || *this < b){
		return true;
	}else{
		return false;
	}
}

// greater than operator; HugeInt > HugeInt
/* Write a definition for the > operator
   by calling the <= operator */
bool HugeInt::operator>(const HugeInt& b) const
{
	if(!(*this <= b)){
		return true;
	}else{
		return false;
	}
}

// greater than or equal operator; HugeInt >= HugeInt
/* Write a definition for the >= operator
   by calling the > and == operators */
bool HugeInt::operator>=(const HugeInt& b) const
{
	if(*this > b || *this == b){
		return true;
	}else{
		return false;
	}
}

// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; ( num.integer[ i ] == 0 ) && ( i <= 29 ); i++ )
      ; // skip leading zeros

   if ( i == 30 )
      output << 0;
   else

      for ( ; i <= 29; i++ )
         output << num.integer[ i ];

   return output;
} // end function operator<<


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
