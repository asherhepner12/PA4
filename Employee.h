/*
# Author:           Asher Hepner
# BannerID:         001397628
# Course:           PA3
# Date Assigned:    Monday, March 18, 2024
# Date/Time Due:    Saturday, March 30, 2024 -- 11:55 pm

# Description:      This program will exercise Object-
                    Oriented Concepts with C++.

# Certification of Authenticity:
  I certify that this assignment is entirely my own work.
*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee
{
 protected:
 string name;
 double wage;
 double hours;
 public:
 // Create a new employee
 Employee (string theName, double theWage, double theHours);
 // Calculate the employee’s pay.
 double calcPay() const;
 string getName () const;
};
#endif // EMPLOYEE_H