// Copyright 2022 UNN-CS
#define _USE_MATH_DEFINES
#include <cstdint>
#include <cmath>
#include "circle.h"

Circle::Circle(double rad) {
    if (rad < 0) {
        throw "Radius can't be negative";
    }
    this->radius = rad;
    this->ference = 2 * M_PI * rad;
    this->area = M_PI * rad * rad;
}

void Circle::setRadius(double rad) {
    if (rad < 0) {
        throw "Radius can't be negative";
    }
    this->radius = rad;
    this->ference = 2 * M_PI * rad;
    this->area = M_PI * rad * rad;
}

void Circle::setFerence(double fer) {
    if (fer < 0) {
        throw "Ference can't be negative";
    }
    this->ference = fer;
    this->radius = fer / (2 * M_PI);
    this->area = M_PI * radius * radius;
}

void Circle::setArea(double ar) {
    if (ar < 0) {
        throw "Area can't be negative";
    }
    this->area = ar;
    this->radius = sqrt(ar / 2);
    this->ference = 2 * M_PI * radius;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const {
    return area;
}
