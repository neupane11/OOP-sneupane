#pragma once
#include <interfaceClass.h>
//#include "../include/interfaceClass.h"
#include <string>

using namespace std;

class Boss1:public Interface{
    private:
        bool isDrunk = true;
        bool isHungry;
        bool isHappy;
        //bool isFlirty = true;
        bool complimentReceived;

        public:
            
            void getFed()override;
            void getDrink()override;
            void receiveCompliments()override;
            void changeMood()override;
            bool getMood()override;
};