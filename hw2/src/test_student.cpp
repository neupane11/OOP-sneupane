#include "Student.h"
#include "gtest/gtest.h"

using namespace std;
using namespace student;

TEST(Student, Constructor) {
      string first = "sandip";
      string last = "neupane";
      float grade = 2.2;
      Student student1(first,last,grade);
      ASSERT_EQ(student1.getfirst(),first);
      ASSERT_EQ(student1.getlast(),last);
      ASSERT_EQ(student1.getgrade(),grade);
      
      
}
TEST(Student,fullname) {
      string first = "sandip";
      string last = "neupane";
      double grade = 2.2;
      Student student1(first,last,grade);
      
      ASSERT_EQ(student1.fullname(),"sandip neupane");
      
      
}
TEST(Student,email) {
      string first = "sandip";
      string last = "neupane";
      double grade = 2.2;
      Student student1(first,last,grade);
      
      ASSERT_EQ(student1.email(),"sandip.neupane@email.com");
}
TEST(Student,curvegrade) {
      string first = "sandip";
      string last = "neupane";
      double grade = 2.2;
      Student student1(first,last,grade);
      
      ASSERT_EQ(student1.curvegrade(),3.2);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
