//
// Created by Joseph Antoniou on 19/06/2023.
//

#ifndef VISITOR_RECTANGLE_H
#define VISITOR_RECTANGLE_H

#include <stdexcept>
#include "Shape.h"

class Rectangle : public Shape<Rectangle> {
public:
    Rectangle(double width, double height);
    ~Rectangle() override;
    double getWidth() const;
    double getHeight() const;



private:
    double width_;
    double height_;
};
#endif //VISITOR_RECTANGLE_H
