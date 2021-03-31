#include "Vehicle.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Vehicle, Constructor){
    string typ("bus");
    string usedfor("public");
    car::Vehicle vehicle(typ,usedfor);
    ASSERT_EQ(vehicle.typ(),typ);
    ASSERT_EQ(vehicle.usedfor(),usedfor);
}
int main(int argc, char**argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
