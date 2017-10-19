//
// Created by WAHUGALA on 10/19/2017.
//

#include "scientists.h"

void scientists::setData() {
    employee::setData();
    cout<<"Enter the number of pubs: "<<endl;
    cin>>pubs;
}

void scientists::getData() {
    employee::getData();
    cout<<"Pubs: "<<pubs;
}
