// File: testDistance
// Created by Trevor Newey on 10/17/2017 for CS1410.
// Copyright (c) 2017 WSU
//
//Task: Create distance class in it's own distance.cpp and .h file. That will have int feet, float inches
//Also will have following members default constructor, construt(2 argu) setters and getters
//test in testdistance.cpp
#include <iostream>
#include "distance.h"
using namespace std;
// Constants, Structs, Classes

// Prototypes

// Main Program Program
int main(void) {
distance d1;
distance d2(1,2.0);
    d1.setFeet(2);
    d1.setInches(3.5);
    cout<<d1<<endl;

    return 0;
}

// Function Definitions