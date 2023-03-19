#include "Cube.h"
#include <string>

using namespace std;
using namespace t_hanoi;


Cube::Cube(double length, string color) {
    
    length_ = length;
    color_ = color;
}

void Cube::setLength(double length) {
    length_ = length;
}

double Cube::getLength() const {
    return length_;
}

string Cube::getColor() const {
    return color_;
}


double Cube::getVolume() const {

    return length_ * length_ * length_;

}

double Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
}


