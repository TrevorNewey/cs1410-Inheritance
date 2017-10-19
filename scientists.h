//
// Created by WAHUGALA on 10/19/2017.
//

#ifndef INHERITANCE_SCIENTISTS_H
#define INHERITANCE_SCIENTISTS_H

#include "employee.h"

class scientists : public employee{
private:
    int pubs;   //publication
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_SCIENTISTS_H
