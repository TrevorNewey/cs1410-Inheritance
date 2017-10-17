//
// Created by WAHUGALA on 10/17/2017.
//

#include "Counter.h"
//Doxygen comments. TYpe /*! or /** followed by enter
/*!
 * Counter: 1 parameter constructor
 */
Counter::Counter(unsigned int count) : count(count) {}          //constructor 1 argument
/*!
 * Counter: Default contstructor
 */
Counter::Counter(): count(0) {}
/*!
 * getCount: Getter for count variable
 * @return : Current count
 */
unsigned int Counter::getCount() const {
    return count;
}
/*!
 * SetCount: Set current count
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count) {
    Counter::count = count;
}
/*!
 * operator++: Increments counter
 * @return : ++counter
 */
Counter Counter::operator++() {
    return Counter(++count);
}
//Constructor no arguments

/*!
 * CountDn--operator
 * @return : decrements counter
 */
Counter CountDn::operator--() {
    return Counter(--count);
}
/*!
 * CountDn Default constructor
 */
CountDn::CountDn(): Counter() {}
/*!
 * Countdn 1 parameter Constructor
 * @param count : Initial constructor
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
