//class Rectangle;

//class Square;
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "AreaVisitor.cpp"

//
// Created by Joseph Antoniou on 19/06/2023.
//
int main() {
    Rectangle* r = new Rectangle(100, 50);
    Square* sq = new Square(20, 20);
    Circle* circle = new Circle(5.8);

    AreaVisitor areaVisitor;
    printf("Square area %f \n", sq ->accept(areaVisitor));
    printf("Circle area %f \n", circle->accept(areaVisitor));
    printf("Rectangle area %f \n", r->accept(areaVisitor));
    delete r;
    delete sq;
    delete circle;

}