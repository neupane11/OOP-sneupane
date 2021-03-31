#include "Car.h"
#include "gtest/gtest.h"

using namespace std;
using namespace car;

TEST(Car, Constructor){
    string typ="electric";
    string usedfor="race";
    int price=20000;
    string company="tesla";
    int model=3;
    int speed=200;
    Car car1(typ,usedfor,price,company,model,speed);
    ASSERT_EQ(car1.typ(),typ);
    ASSERT_EQ(car1.usedfor(),usedfor);
    ASSERT_EQ(car1.getprice(),price);
    ASSERT_EQ(car1.getcompany(),company);
    ASSERT_EQ(car1.getmodel(),model);
    ASSERT_EQ(car1.getmaxspeed(),speed);

}
TEST(Car, methods){
    string typ="electric";
    string usedfor="race";
    int price=0;
    string company="tesla";
    int model=3;
    int maxspeed=200;
    Car car1(typ,usedfor,price,company,model,maxspeed);
    car1.price(1000);
    ASSERT_EQ(car1.winrace(),false);
    ASSERT_EQ(car1.isexpensive(),true);
}
int main(int argc, char**argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}