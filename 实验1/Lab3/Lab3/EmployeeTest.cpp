// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using std::cout;
using std::endl;
  
#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
	Employee employee1("Bob", "Jones", 34500);
	Employee employee2("Susan", "Baker", 37800);
	
   /* Output the first name, last name and salary for each Employee. */
	cout << "Employee 1: " << employee1.getEmployeeFirstName() << " "
	<< employee1.getEmployeeLastName() << "; Yearly Salary: " <<
	employee1.getEmployssMonthlySalary() << endl;
	
	cout << "Employee 2: " << employee2.getEmployeeFirstName() << " "
	<< employee2.getEmployeeLastName() << "; Yearly Salary: " <<
	employee2.getEmployssMonthlySalary() << endl << endl;
	
   /* Give each Employee a 10% raise. */
	cout << "Increasing employee salaries by 10%" << endl;
	employee1.setEmployeeMonthlySalary((employee1.getEmployssMonthlySalary()*110)
												  /100);
	employee2.setEmployeeMonthlySalary((employee2.getEmployssMonthlySalary()*110)
												  /100);
	
   /* Output the first name, last name and salary of each Employee again. */
	cout << "Employee 1: " << employee1.getEmployeeFirstName() << " "
	<< employee1.getEmployeeLastName() << "; Yearly Salary: " <<
	employee1.getEmployssMonthlySalary() << endl;
	
	cout << "Employee 2: " << employee2.getEmployeeFirstName() << " "
	<< employee2.getEmployeeLastName() << "; Yearly Salary: " <<
	employee2.getEmployssMonthlySalary() << endl << endl;
	
   return 0; // indicate successful termination
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
