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

/*
This program creates a list of Managers and finds the highest paid Manager 
along with the average pay.
*/
#include "Employee.h"
#include "Employee.cpp"
#include "Manager.h"
#include "Manager.cpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    //Get the number of Manager objects (<100)
    cout<<"Enter number of managers: ";
    int numManagers;
    cin>>numManagers;
    cout<<endl;
    if (numManagers > 100)
    {
        cout<<"Can only have up to 100 managers!"<<endl;
        return 0;
    }

    //Declare an array of pointers to manager objects
    Manager *managerlist [numManagers];

    //Declare variables for Manager objects
    string managerName;
    double managerWage, managerHours, managerBonus;

    //Loop for creating Manager objects
    for (int i = 0; i < numManagers; i++)
    {
        //Prompt for parameters of Manager objects
        cout<<"Enter manager "<<i<<" name: ";
        cin>>managerName;
        cout<<"Enter manager "<<i<<" hourly wage: ";
        cin>>managerWage;
        cout<<"Enter manager "<<i<<" hours worked: ";
        cin>>managerHours;
        cout<<"Enter manager "<<i<<" bonus: ";
        cin>>managerBonus;
        cout<<endl;

        //Create a dynamic Manager object
        Manager *managerptr = new Manager (managerName, managerWage, managerHours, managerBonus);
        //Store pointer to Manager object in array
        managerlist[i] = managerptr;
    }

    //Create object for the highest paid Manager
    Manager highestpaid = *managerlist[0];
    //Create variable for average Manager pay
    double average = 0;

    //Loop through Manager pointer array to find highest paid and average
    for (int i = 0; i < numManagers; i++)
    {
        if (managerlist[i]->calcPay() > highestpaid.calcPay())
        {highestpaid = *managerlist[i];}
        average += managerlist[i]->calcPay();
    }
    average = average / numManagers;

    //Output highest paid and average pay
    cout<<"Highest paid manager is "<<fixed<<setprecision(2)<<highestpaid.getName()<<" who is paid $"<<highestpaid.calcPay()<<endl
    <<"Average pay is $"<<average<<endl;

    //Delete the dynamic Manager objects and assign nullptr to them
    for (int i=0; i<numManagers; i++)
    {   
        delete managerlist[i];
        managerlist[i] = nullptr;
    }

    return 0;
}
