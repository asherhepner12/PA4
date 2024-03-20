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
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager: public Employee
{
    private:
        double bonus;
    public:
        //Create a Manager object with parameters
        Manager(string theName, double theWage, double theHours, double theBonus);
        //Calculate the Manager's pay
        double calcPay() const;
};

#endif //MANAGER_H