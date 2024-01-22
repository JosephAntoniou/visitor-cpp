//
// Created by Joseph Antoniou on 23/06/2023.
//

#include "Square.h"
Square::Square(double width, double height) : width_ { width }, height_ { height } {

}

Square::~Square() {

}

double Square::getWidth() const {
    return width_;
}

double Square::getHeight() const {
    return height_;
}
