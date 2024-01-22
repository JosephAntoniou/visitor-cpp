//
// Created by Joseph Antoniou on 22/01/2024.
//

#include "Circle.h"

Circle::Circle(double radius): radius_(radius) {

}

Circle::~Circle() {

}

double Circle::getRadius() const {
    return radius_;
}
