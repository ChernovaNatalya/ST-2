// Copyright 2022 UNN-CS
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



