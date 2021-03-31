#include "Vehicle.h"

#include <string>
namespace car{
    Vehicle::Vehicle(const std::string &typ, const std::string &usedfor)
        :m_typ(typ),m_usedfor(usedfor) //initialize this way
    {
        //m_typ=typ;
        //m_usedfor=usedfor;
    }
    const std::string &Vehicle::typ()const{return m_typ;};
    const std::string &Vehicle::usedfor()const{return m_usedfor;}; //ref to const string
}