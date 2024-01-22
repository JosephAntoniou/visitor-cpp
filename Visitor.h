//
// Created by Joseph Antoniou on 23/06/2023.
//

#ifndef VISITOR_VISITOR_H
#define VISITOR_VISITOR_H

// Forward declarations
class Rectangle;
class Square;
class Circle;


template <typename Result>
class Visitor {
public:
    virtual Result visit(Rectangle& rectangle) const = 0;
    virtual Result visit(Square& square) const = 0;
    virtual Result visit(Circle& circle) const = 0;
};

#endif //VISITOR_VISITOR_H
