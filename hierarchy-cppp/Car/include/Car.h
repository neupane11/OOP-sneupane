#pragma once

#include <string>
#include "Vehicle.h"

namespace car
{
    class Car: public Vehicle //way offf saying is a in c++ , car is a vehicle
    {
        private:int m_price;//m for member
        private:std::string m_company;
        private:int m_model;
        private:int m_speed;
        //constructor
        public:Car(std::string typ, std::string usedfor, int price,std::string company, int model, int speed);

        public:bool winrace();
        public:bool isexpensive();
       
       
        public:int getprice();
        public:std::string getcompany();
        public:int getmodel();
        public:int getspeed();
        
        
    };
} // namespace moon