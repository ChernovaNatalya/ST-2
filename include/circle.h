// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>

class Circle {
public:
    explicit Circle(double rad = 0);

    void setRadius(double rad);
    void setFerence(double fer);
    void setArea(double ar);

    double getRadius() const;
    double getFerence() const;
    double getArea() const;

private:
    double radius;
    double ference;
    double area;

};

#endif  // INCLUDE_CIRCLE_H_

