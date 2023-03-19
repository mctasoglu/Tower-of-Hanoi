// Header file for Cube
#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace t_hanoi {

    class Cube {

        public:
            Cube(double length, string color);
            double getLength() const;
            void setLength(double length);

            double getVolume() const;
            double getSurfaceArea() const;

            string getColor() const;


        private:
        
            double length_; // static variable
            string color_;
          


    };
}