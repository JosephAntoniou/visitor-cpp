class Rectangle;
#include "Rectangle.h"
#include "Square.h"
#include "Visitor.h"
#include "Circle.h"

//
// Created by Joseph Antoniou on 23/06/2023.
//
class AreaVisitor : public Visitor<double> {

    double visit(Rectangle& rectangle) const override {
        return rectangle.getWidth() * rectangle.getHeight();
    }

    double visit(Square& square) const override {
        return square.getWidth() * square.getHeight();
    }

    double visit(Circle& circle) const override {
        return 3.14 * circle.getRadius() * circle.getRadius();
    }
};