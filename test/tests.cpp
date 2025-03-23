// Copyright 2025 UNN-CS Team
#define _USE_MATH_DEFINES
#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"


TEST(TestTask, CircleGetRadius1) {
    Circle c(5);
    EXPECT_EQ(c.getRadius(), 5);
}
TEST(TestTask, CircleGetFerence1) {
    Circle c(5);
    EXPECT_EQ(c.getFerence(), 10 * M_PI);
}
TEST(TestTask, CircleGetArea1) {
    Circle c(5);
    EXPECT_EQ(c.getArea(), 25 * M_PI);
}
TEST(TestTask, CircleSetWrongRadius1) {
    Circle c(5);
    ASSERT_ANY_THROW(c.setRadius(-5));
}
TEST(TestTask, CircleSetWrongFerence1) {
    Circle c(5);
    ASSERT_ANY_THROW(c.setFerence(-5));
}
TEST(TestTask, CircleSetWrongArea1) {
    Circle c(5);
    ASSERT_ANY_THROW(c.setArea(-5));
}
TEST(TestTask, CircleGetTwoRadius1) {
    Circle c1(5), c2(5);
    EXPECT_EQ(c1.getRadius(), c2.getRadius());
}
TEST(TestTask, CircleGetTwoFerence1) {
    Circle c1(5), c2(5);
    EXPECT_EQ(c1.getFerence(), c2.getFerence());
}
TEST(TestTask, CircleGetTwoArea1) {
    Circle c1(5), c2(5);
    EXPECT_EQ(c1.getArea(), c2.getArea());
}
TEST(TestTask, CircleGetAndSetTwoRadius) {
    Circle c1(5), c2(5);
    c2.setRadius(c1.getRadius());
    EXPECT_EQ(c1.getRadius(), c2.getRadius());
}
TEST(TestTask, CircleGetRadius2) {
    Circle c(500);
    EXPECT_EQ(c.getRadius(), 500);
}
TEST(TestTask, CircleGetFerence2) {
    Circle c(5);
    EXPECT_EQ(c.getFerence(), 1000 * M_PI);
}
TEST(TestTask, CircleGetArea2) {
    Circle c(5);
    EXPECT_EQ(c.getArea(), 250000 * M_PI);
}
TEST(TestTask, CircleWrongRadius2) {
    Circle c(500);
    ASSERT_ANY_THROW(c.setRadius(-500));
}
TEST(TestTask, CircleWrongFerence2) {
    Circle c(500);
    ASSERT_ANY_THROW(c.setFerence(-500));
}
TEST(TestTask, CircleWrongArea2) {
    Circle c(500);
    ASSERT_ANY_THROW(c.setArea(-500));
}
TEST(TestTask, CircleGetTwoRadius2) {
    Circle c1(554), c2(554);
    EXPECT_EQ(c1.getRadius(), c2.getRadius());
}
TEST(TestTask, CircleGetTwoFerence2) {
    Circle c1(523), c2(523);
    EXPECT_EQ(c1.getFerence(), c2.getFerence());
}
TEST(TestTask, EarthAndRopeTest) {
    EXPECT_NEAR(EarthAndRope(), 0.15915, 0.000005);
}
TEST(TestTask, SwimmingPoolTest) {
    EXPECT_NEAR(SwimmingPool(), 72256.63103, 0.000005);
}
