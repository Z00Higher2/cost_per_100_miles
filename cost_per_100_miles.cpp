/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment:HW E2.10

Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank
*/
#include <iostream>
using namespace std;

int main()
{
    double gallons; // Declared the number of gallons gas in the tank
    double efficiency; // Declared the number of miles per gallon
    double price; // Declared the price of gas

    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> gallons; // User input for the number of gallon in the tank

    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> efficiency; // User input for the efficiency in miles per gallon

    cout << "Enter the price of gas per gallon : $";
    cin >> price; // User input for the price of gas

    double costPer100Miles = (100 / efficiency) * price; // Finds the cost per 100 miles

    double distance = gallons * efficiency; // Finds the total distance

    cout << "Cost per 100 miles: $" << costPer100Miles << endl;
    cout << "Distance the car can go: " << distance << endl;

}