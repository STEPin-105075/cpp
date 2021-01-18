#include "box.h"
#include <gtest/gtest.h>

namespace {

TEST(BoxTest, Default){
    Box b1;
    EXPECT_EQ(0, b1.height());
    EXPECT_EQ(0, b1.length());
    EXPECT_EQ(0, b1.breadth());
    EXPECT_EQ(0, b1.volume());

}
TEST(BoxTest, p1) {
  Box b2(25,15,30);
  EXPECT_EQ(30, b2.height());
  EXPECT_EQ(25, b2.length());
  EXPECT_EQ(15, b2.breadth());
  EXPECT_EQ(11250, b2.volume());

}



TEST(BoxTest, P2){
    Box b3(10);
    EXPECT_EQ(21, b3.height());
    EXPECT_EQ(10, b3.length());
    EXPECT_EQ(9, b3.breadth());
    EXPECT_EQ(1890, b3.volume());

}

}