//
// Created by Joseph Antoniou on 23/06/2023.
//

#ifndef VISITOR_SHAPE_H
#define VISITOR_SHAPE_H

#include "Visitor.h"

template <typename Implementation>
class Shape {
public:
    virtual ~Shape() = default;

    template<typename Result>
    Result accept(Visitor<Result>& visitor) {
        return visitor.visit(dynamic_cast<Implementation&>(*this));
    }

};

#endif //VISITOR_SHAPE_H