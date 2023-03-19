#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Cube.h"

using namespace std;
// using namespace t_hanoi;

class Stack {


    public:
        void push_back(const t_hanoi::Cube & cube); // This function is going to take a cube and add it to the top of stack
        t_hanoi::Cube pop();
        t_hanoi::Cube & peek();
        unsigned size() const;

        friend std::ostream& operator<<(std::ostream & os, const Stack & stack);


    private: //Make your stack implementation a vector type
        vector<t_hanoi::Cube> cubes_;

};