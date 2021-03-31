#include "Car.h"

namespace car {
    Car::Car(const std::string &typ, const std::string &usedfor,int price,const std::string &company,const int &model,const int &maxspeed)
    
        :Vehicle(typ,usedfor),m_price(price),m_company(company),
        m_model(model),m_maxspeed(maxspeed) //constructor for base class vehicle
    {
        //m_typ=typ; is not required
        //m_usedfor=usedfor; is not required
        
    }
    
    bool Car::winrace() const{
        if(m_maxspeed > 200)
            return true;
        else
            return false;
            }
    bool Car::isexpensive()const{
        if (m_price>100000)
            return true;
        else
            return false;
            }
    
    int Car::getprice() const{
        return m_price;
    }
    void Car::price(int value){
        m_price=value+100000;
        
    }
    std::string Car::getcompany()const{
        return m_company;
    }
    int Car::getmodel() const{
        return m_model;
    }
    int Car::getmaxspeed()const{
        return m_maxspeed;
    }
}