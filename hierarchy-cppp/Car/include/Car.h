#pragma once

#include <string>
#include "Vehicle.h"

namespace car
{
    class Car: public Vehicle //way of saying is a in c++ , car is a vehicle
    {
        private: int m_price;//m for member, no const for price cuz price has setter
        private: const std::string m_company;
        private: const int m_model;
        private: const int m_maxspeed;
        //constructor
        public:Car(const std::string& typ, const std::string &usedfor, int price,const std::string &company, const int &model, const int &maxspeed);

        public: bool winrace() const;
        public: bool isexpensive() const;

        public: int getprice() const;
        public: void price(int value);
        public: std::string getcompany() const;
        public: int getmodel() const;
        public: int getmaxspeed() const;
    };
} // namespace moon