//
// Created by WAHUGALA on 10/19/2017.
//

#include "manager.h"

void manager::setData() {
    employee::setData();
    cout<<"\nEnter your title";
    cin>>title;
    cin.ignore();
    cout<<"\nEnter golf club dues: ";
    cin>>dues;
}
void manager::getData() {
    employee::getData();
    cout<<"\n Title: "<<title;
    cout<<"\n Dues: "<<dues;
}
