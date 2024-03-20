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
#include "Employee.h"
#include "Manager.h"
#include <string>
#include <cstdlib>
using namespace std;

//Default Constructor of Manager Class
Manager::Manager(string theName = "DEFAULT", double theWage = 0, double theHours = 0, double theBonus = 0): 
Employee (theName, theWage, theHours)
{bonus = theBonus;};

//Calculate Manager's pay using Employee::calcPay() and add the Manager's bonus
double Manager::calcPay() const
{return Employee::calcPay() + bonus;}


