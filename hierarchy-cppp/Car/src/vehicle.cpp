#include "Vehicle.h"

#include <string>
namespace car{

    
    Vehicle::Vehicle(const std::string &typ, std::string usedfor)
        :m_typ(typ),m_usedfor(usedfor) //initialize this way
    {
        //m_typ=typ;
        //m_usedfor=usedfor;
    }
    
    
    
    std::string Vehicle::typ(){return m_typ;};
    std::string Vehicle::usedfor(){return m_usedfor;};
       

}