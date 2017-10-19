//
// Created by WAHUGALA on 10/17/2017.
//

#ifndef INHERITANCE_DISTANCE_H
#define INHERITANCE_DISTANCE_H

#include <ostream>

class distance {
private:
    int feet;
    float inches;
public:
    distance(int feet, float inches);
    distance();
    void setFeet(int feet);
    void setInches(float inches);
    int getFeet() const;
    float getInches() const;
};


#endif //INHERITANCE_DISTANCE_H
