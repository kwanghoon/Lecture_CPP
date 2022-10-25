#include <iostream>
using namespace std;

#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"


int main() {
  Employee e1("A", "1");
  Employee e2;

  //  e1.printCheck();
  //  e2.printCheck();

  HourlyEmployee h1("A", "1", 10, 54);
  HourlyEmployee h2;

  h1.printCheck();
  h2.printCheck();

  SalariedEmployee s1("A", "1", 160);
  SalariedEmployee s2;

  s1.printCheck();
  s2.printCheck();
  
  return 0;
}
