#include <iostream>
using namespace std;

#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
  : /* Q1: 완성하시오 */
{ /* nothing */ }

SalariedEmployee::SalariedEmployee(string theName, string theSsn, double theWeeklySalary)
  : /* Q2: 완성하시오 */
{ /* nothing */ }

double SalariedEmployee::getSalary() const {
  return this->salary;
}

void SalariedEmployee::setSalary(double newSalary) {
  this->salary = newSalary;
}

void SalariedEmployee::printCheck() {
  /* Q3: 완성하시오 */
  cout << "\n--------------------------\n";
  cout << "Pay to the order of " << /* Q4: 완성하시오 */ << endl;
  cout << "The sum of " << /* Q5: 완성하시오 */  << " Dollars" << endl;
  cout << "Check Stub Not Negotiable" << endl;
  cout << "Employee Number: " << /* Q6: 완성하시오 */ << endl;
  cout << "Salaried Employee. Regular Pay: " << /* Q7: 완성하시오 */  << endl;
  cout << "\n--------------------------\n";
}
