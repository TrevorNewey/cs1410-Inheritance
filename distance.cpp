//
// Created by WAHUGALA on 10/17/2017.
//

#include "distance.h"

distance::distance(int feet, float inches) : feet(feet), inches(inches) {}

distance::distance(): feet(0), inches(0.0) {}

void distance::setFeet(int feet) {
    distance::feet = feet;
}

void distance::setInches(float inches) {
    distance::inches = inches;
}

int distance::getFeet() const {
    return feet;
}

float distance::getInches() const {
    return inches;
}
