//
// Created by WAHUGALA on 10/19/2017.
//

#include "employee.h"

void employee::setData() {
    cout<<"\n Enter last name";
    cin>>name;
    cin.ignore();       //Clears the buffer.
    cout<<"\nEnter ID Number: ";
    cin>>number;
}

void employee::getData() {
    cout<<"\n Name: "<<name;
    cout<<"\n IdNumber: "<<number;
}
