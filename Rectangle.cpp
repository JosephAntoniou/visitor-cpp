//
// Created by Joseph Antoniou on 19/06/2023.
//

#include <stdexcept>
#include "Rectangle.h"


Rectangle::Rectangle(double width, double height) : width_ { width }, height_ { height } {
}

Rectangle::~Rectangle() {

}

double Rectangle::getWidth() const {
    return width_;
}

double Rectangle::getHeight() const {
    return height_;
}

