//
// Created by WAHUGALA on 10/19/2017.
//

#include "laborer.h"

void foreman::setData() {
    laborer::setData();
    cout<<"\n Enter quotas: "<<endl;
    cin>>quotas;
}

void foreman::getData() {
    employee::getData();
    cout<<"The quota is: "<<quotas<<endl;
}
