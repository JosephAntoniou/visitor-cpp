//
// Created by Joseph Antoniou on 23/06/2023.
//

#ifndef VISITOR_SQUARE_H
#define VISITOR_SQUARE_H


#include "Shape.h"

class Square : public Shape<Square> {
public:
    Square(double width, double height);
    ~Square();
    double getWidth() const;
    double getHeight() const;


private:
    double width_;
    double height_;
};
#endif //VISITOR_SQUARE_H
