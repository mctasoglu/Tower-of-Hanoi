#include "Stack.h"
#include "Cube.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// using namespace t_hanoi;

void Stack::push_back(const t_hanoi::Cube & cube) {

    cubes_.push_back(cube);

}

t_hanoi::Cube Stack::pop() {
    t_hanoi::Cube top = cubes_.back();
    cubes_.pop_back();
    return top;
}

t_hanoi::Cube & Stack::peek() {
    t_hanoi::Cube& top = cubes_.back();
    return top;

}

unsigned Stack::size() const {
    return cubes_.size();
}

std::ostream& operator<<(std::ostream & os, const Stack & stack) {
    for(unsigned i = 0; i < stack.size(); i++) {
        os << stack.cubes_[i].getLength() << " ";

    }

    return os;
}