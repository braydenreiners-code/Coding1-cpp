// header file for our robot class
// we will declare our functions in this header...
//we will define function in 'robot.cpp'


// this keeps any code from adding this robot twice.
#pragma once

#include <iostream>
using namespace std;

class robot {
    public:
        string name;
        int charge;

        // We define the default values in the declaration.
        robot(string n = "R.O.B.", int c = 10);
        void status();
};