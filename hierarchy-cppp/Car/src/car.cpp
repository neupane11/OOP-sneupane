#include "Car.h"

namespace car {
    Car::Car(std::string typ, std::string usedfor,int price,std::string company,int model,int speed)
    
        :Vehicle(typ,usedfor) //constructor for base class vehicle
    {
        //m_typ=typ; is not required
        //m_usedfor=usedfor; is not required
        m_price=price;
        m_company=company;
        m_model=model;
        m_speed=speed;
    }
    bool Car::winrace(){
        if(m_speed > 200)
            return true;
        else
            return false;
            }
    bool Car::isexpensive(){
        if (m_price>=1000000)
            return true;
        else
            return false;
            }
    int Car::getprice(){
        return m_price;
    }
    std::string Car::getcompany(){
        return m_company;
    }
    int Car::getmodel(){
        return m_model;
    }
    int Car::getspeed(){
        return m_speed;
    }
}