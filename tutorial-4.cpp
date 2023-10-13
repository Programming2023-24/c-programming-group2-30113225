// tutorial-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/*
* Write a simple Program to eter the name and age of an Employe
*/

int main() 
{
    //1. Declare variables you will be using within this program
    double diameter, radius;
    double pi = 3.1416;
    double area;
    //Expand the required logic to solve the problem
    //Didplsy results to the nearest whole number
    cout << endl;
    cout << "What diameter do you want to cut into inches?" << endl;
    cin >> diameter;
    radius = diameter / 2;
    cout << radius;
    area = pi * radius * radius;
    double slices = area / 14.125;
    cout << "Number of slice " << slices << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
