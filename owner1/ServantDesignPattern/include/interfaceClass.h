#pragma once
#include <string>
using namespace std;

class Interface{
    public:
        virtual void getFed()=0;

        virtual void getDrink()=0;

        virtual void changeMood()=0;

        virtual void receiveCompliments()=0;

        virtual bool getMood()=0;
        
        
};