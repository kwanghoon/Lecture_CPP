#ifndef D_SALARIEDEMPLOYEE
#define D_SALARIEDEMPLOYEE

#include <iostream>
using namespace std;

#include /* Q8: 완성하시오 */

class SalariedEmployee /* Q9: 완성하시오 */ {
 public:
  SalariedEmployee();
  SalariedEmployee(string theName, string theSsn, double theWeeklySalary);
  double getSalary() const;
  void setSalary(double newSalary);
  void printCheck();
 private:
  double salary;
};

#endif // D_SALARIEDEMPLOYEE
