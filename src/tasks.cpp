// Copyright 2022 UNN-CS
#include <cstdint>
#include "tasks.h"
#include "circle.h"

double EarthAndRope() {
	double radiusEarth = 6378100;
	Circle earth(radiusEarth);
	Circle rope;
	rope.setFerence(earth.getFerence() + 1);
	return rope.getRadius() - earth.getRadius();
}
double SwimmingPool() {
	Circle swimPool(3);
	double concreteCostPerM = 1000;
	double fenceCostPerM = 2000;
	double width = 1;
	Circle track(swimPool.getRadius() + width);
	double concreteArea = track.getArea() - swimPool.getArea();
	double fenceLength = track.getFerence();
	double concreteCost = concreteCostPerM * concreteArea;
	double fenceCost = fenceCostPerM * fenceLength;
	return concreteCost + fenceCost;
}