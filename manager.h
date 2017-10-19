//
// Created by WAHUGALA on 10/19/2017.
//

#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H

#include "employee.h"

class manager:public employee {
private:
    string title;       //"presidente" etc
    double dues;        //golf club dues
public:
    void setData();
    void getData();
};



#endif //INHERITANCE_MANAGER_H
