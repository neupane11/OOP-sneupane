#include <Boss1.h>
#include <Boos2.h>
#include "gtest/gtest.h"
using namespace std;

TEST(Boss1, Happiness){
    
    bool isDrunk = true;
    bool hungry=true;
    bool Happy=true;
    bool complimentReceived=false;
    Boss1 b1;
    b1.getDrink();
    b1.receiveCompliments();
    b1.getFed();
    b1.changeMood();
    ASSERT_EQ(b1.getMood(),Happy);
}
TEST(Boss2, Happiness){
    
    bool isDrunk = true;
    bool hungry;
    bool Happy=false;
    bool complimentReceived=false;
    Boss2 b2;
    b2.getFed();
    b2.getDrink();
    b2.changeMood();
    ASSERT_EQ(b2.getMood(),Happy);
}
int main(int argc, char**argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}