#include "gtest/gtest.h"
#include <owner.h>
using namespace std;

TEST(MoveServent, test) {
      
      Triangle triangle(1,3,2,Position(-1,0));
      MoveServent ser;
      ser.moveTo(triangle,Position(3,2));
      
      ASSERT_EQ(Position(3,2),triangle.getPosition());
      
      
      
}