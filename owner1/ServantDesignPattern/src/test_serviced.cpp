//#include <interfaceClass.h>
#include <Boss1.h>
#include <Boos2.h>
#include <servant.h>
#include <fstream>
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
TEST(Servant, served){
    
    Servant servant("john");
    Boss1 boss;
    Boss1* b1;
    b1=&boss;
    
    servant.giveWine(b1);
    servant.giveCompliments(b1);
    servant.feed(b1);
    servant.moodechange(b1);
    ASSERT_EQ(servant.whatisMood(b1),true);

   
    Boss2 bos;
    Boss2* b2;
    b2=&bos;
    
    servant.giveWine(b2);
    servant.giveCompliments(b2);
    servant.feed(b2);
    servant.moodechange(b2);
    ASSERT_EQ(servant.whatisMood(b2),false);
}
int main(int argc, char**argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}