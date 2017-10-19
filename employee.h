//
// Created by WAHUGALA on 10/19/2017.
//

#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H

#include <iostream>
using namespace std;


class employee {
private:
    string name;            //Employee Name
    unsigned long number; //Employee ID
public:
    virtual void getData();

    virtual void setData();
};


#endif //INHERITANCE_EMPLOYEE_H
