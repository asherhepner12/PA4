# PA4
C++ Programming Assignment 4 for CS 181 (Assigned 3/18/24)
This program finds the highest paid and average pay for the specified amount of Managers.

This program uses the Employee base class and Manager derived class. 
It creates an array of Manager object pointers based on how many managers you wish to add to the program.
The program then prompts the user with each Manager's name, hourly wage, the hours they worked, and their fixed pay bonus.
A dynamic object is created from each Manager and it is assigned to the array.
Looping through the Manager list, the program uses the Manager class's overriden "calcPay" function and the "getName" function to find the highest paid manager, as well as the average pay.
The program then deletes the dynamic objects.
