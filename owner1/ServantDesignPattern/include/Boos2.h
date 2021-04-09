#pragma once
#include <interfaceClass.h>
//#include "../include/interfaceClass.h"
#include <string>

using namespace std;

class Boss2:public Interface{
    private:
        bool isDrunk;
        bool isHungry=true;
        bool isHappy;
        
        bool complimentReceived;

        public:
            
            void getFed()override;
            void getDrink()override;
            void receiveCompliments()override;
            void changeMood()override;
            bool getMood()override;
};