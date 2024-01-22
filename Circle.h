//
// Created by Joseph Antoniou on 22/01/2024.
//

#ifndef VISITOR_CIRCLE_H
#define VISITOR_CIRCLE_H


#include "Shape.h"

class Circle : public Shape<Circle> {
public:
    Circle(double radius);
    ~Circle() override;
    double getRadius() const;



private:
    double radius_;
};


#endif //VISITOR_CIRCLE_H
