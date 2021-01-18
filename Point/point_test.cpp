#include "point.h"
#include <gtest/gtest.h>

namespace {
TEST(PointTest, Paramer1) {
  Point C1(1,2);
  EXPECT_EQ(2, C1.distanceFromorigin());
  EXPECT_EQ(1, C1.quadrant());
  EXPECT_EQ(0, C1.isOrigin());
  EXPECT_EQ(0, C1.isOnXAxis());
  EXPECT_EQ(0, C1.isOnYAxis());

}

TEST(PointTest, Default) {
  Point C1;
  EXPECT_EQ(0, C1.distanceFromorigin());
  EXPECT_EQ(0, C1.quadrant());
  EXPECT_EQ(1, C1.isOrigin());
  EXPECT_EQ(0, C1.isOnXAxis());
  EXPECT_EQ(0, C1.isOnYAxis());

}

TEST(PointTest, Paramer2) {
  Point C1(0,5);
  EXPECT_EQ(5, C1.distanceFromorigin());
  EXPECT_EQ(-1, C1.quadrant());
  EXPECT_EQ(0, C1.isOrigin());
  EXPECT_EQ(0, C1.isOnXAxis());
  EXPECT_EQ(1, C1.isOnYAxis());

}
/*
TEST(BoxTest, Default){
    Box C2;
    EXPECT_EQ(0, C2.height());
    EXPECT_EQ(0, C2.length());
    EXPECT_EQ(0, C2.breadth());
    EXPECT_EQ(0, C2.volume());

}

TEST(BoxTest, Parameter2){
    Box C3(10);
    EXPECT_EQ(0, C3.height());
    EXPECT_EQ(10, C3.length());
    EXPECT_EQ(0, C3.breadth());
    EXPECT_EQ(0, C3.volume());

}
*/
}